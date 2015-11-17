#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "default_fnt.h"

typedef struct sym {
    char ch;
    char *map;
    struct sym *next;
} sym;

typedef enum {
    mode_first,
    mode_normal,
    mode_get_name,
    mode_get_src,
} mode;

void bprint(sym *font, char *src, int fg, int bg);
void bstrcpy(char *dest, char *src, int src_len);
void destroy_font(sym *font);
sym *get_sym(sym *font, char ch);
sym *new_font(char *font_src);
void usage(char *progname);
void version(void);

void bprint(sym *font, char *src, int fg, int bg){
    int i,
        j,
        k;
    sym *sel;
    char frag;

    for(i = 0; i < 5; i++){
        for(j = 0; j < strlen(src); j++){
            for(k = 0; k < 4; k++){
                if(src[j] >= 'a' && src[j] <= 'z'){
                    sel = get_sym(font, src[j] - 32);
                } else {
                    sel = get_sym(font, src[j]);
                }
                if(sel){
                    frag = sel->map[k + i * 4];
                } else {
                    frag = 0;
                }
                if(frag){
                    printf("\e[0;4%i;37m  \e[0m", fg);
                } else {
                    printf("\e[0;4%i;37m  \e[0m", bg);
                }
            }
        }
        fputc('\n', stdout);
    }
}

void bstrcpy(char *dest, char *src, int src_len){
    char *dp = dest;
    int i;

    for(i = 0; i < src_len; i++){
        *dp = src[i];
        dp++;
    }
}

void destroy_font(sym *font){
    sym *fp  = font,
        *fp2 = font;

    while(fp){
        fp2 = fp->next;
        free(fp->map);
        free(fp);
        fp = fp2;
    }
}

sym *get_sym(sym *font, char ch){
    sym *fp = font;

    while(fp){
        if(fp->ch == ch){
            return fp;
        }
        fp = fp->next;
    }
    return 0;
}

sym *new_font(char *font_src){
    sym *font = calloc(sizeof(sym), 1),
        *glyph;
    char *gmp,
         *buf = calloc(sizeof(char), 1000000),
         *bp = buf;
    FILE *f;
    int c;
    mode m = mode_first;

    if(font_src == "self"){
        bstrcpy(buf, default_fnt, default_fnt_len);
    } else {
        f = fopen(font_src, "r");
        while((c = fgetc(f)) != EOF){
            *bp = c;
            bp++;
        }
        fclose(f);
        bp = buf;
    }

    while(*bp){
        switch(m){
            case mode_first:
            case mode_normal:
                if(*bp == '+'){
                    if(m == mode_normal){
                        glyph->next = calloc(sizeof(sym), 1);
                        glyph = glyph->next;
                    } else {
                        glyph = font;
                    }
                    glyph->map = calloc(sizeof(char), 20);
                    gmp = glyph->map;
                    m = mode_get_name;
                }
                break;
            case mode_get_name:
                glyph->ch = *bp;
                m = mode_get_src;
                break;
            case mode_get_src:
                switch(*bp){
                    case '*':
                        *gmp = 1;
                        gmp++;
                        break;
                    case '.':
                        *gmp = 0;
                        gmp++;
                        break;
                    case '-':
                        m = mode_normal;
                        break;
                }
                break;
        }
        bp++;
    }
    return font;
}

void usage(char *progname){
    printf("Usage: %s [options]\n", progname);
    printf( "Options:\n"
            "  -t [text]  Text to display.       Required\n"
            "  -f [0..7]  Foreground color.      Default 7\n"
            "  -b [0..7]  Background color.      Default 0\n"
            "  -F [file]  File to use for font.  Default <internal>\n"
            "  -v         print version info and exit.\n");
    exit(1);
}

void version(){
    printf("tty-banner v2.0.0-r2015-11-17 by Braden Best\n");
    exit(0);
}

int main(int argc, char **argv){
    sym *font;
    char *font_src = "self",
         *msg,
         *opt,
         *arg;
    int fg = 7,
        bg = 0,
        i;

    if(argc > 1){
        for(i = 1; i < argc;){
            opt = argv[i];
            arg = argv[i+1];
            i+=2;
            if(opt[0] == '-'){
                switch(opt[1]){
                    case 't':
                        msg = arg;
                        break;
                    case 'f':
                        fg = arg[0] - '0';
                        break;
                    case 'b':
                        bg = arg[0] - '0';
                        break;
                    case 'F':
                        font_src = arg;
                        break;
                    case 'v':
                        version();
                        break;
                    default:
                        usage(argv[0]);
                }
            } else {
                usage(argv[0]);
            }
        }
    } else {
        usage(argv[0]);
    }

    font = new_font(font_src);
    bprint(font, msg, fg, bg);
    destroy_font(font);
    return 0;
}
