#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "font.h"

void bprint(sym *font, char *src, int fg, int bg);
void bstrcpy(char *dest, char *src, int src_len);
void usage(char *progname);
void version(void);

void bprint(sym *font, char *src, int fg, int bg){
    int i,
        j,
        k;
    sym *sel;
    char frag,
         *srcbuf = 0,
         *srcbp;

    if(src[0] == 0){
        srcbuf = calloc(sizeof(char), 30);
        srcbp = srcbuf;
        src = srcbuf;
        while((i = fgetc(stdin)) != EOF){
        /* Why this and not fgets? fgets breaks after a newline. */
            *srcbp = i;
            srcbp++;
            if(srcbp - srcbuf >= 29){
                break;
            }
        }
    }
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
    if(srcbuf){
        free(srcbuf);
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

void usage(char *progname){
    printf("Usage: %s [options]\n", progname);
    printf( "Options:\n"
            "  -t [text]  Text to display.       Required. -s is an alternative\n"
            "  -s         Get text from stdin.\n"
            "  -f [0..7]  Foreground color.      Default 7\n"
            "  -b [0..7]  Background color.      Default 0\n"
            "  -F [file]  File to use for font.  Default <internal>\n"
            "  -v         print version info and exit.\n");
    exit(1);
}

void version(){
    printf("tty-banner v2.1-r2015-11-17 by Braden Best\n");
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
        for(i = 1; i < argc; i++){
            opt = argv[i];
            arg = argv[i+1];
            if(opt[0] == '-'){
                switch(opt[1]){
                    case 't':
                        msg = arg;
                        i++;
                        break;
                    case 's':
                        msg = "\0";
                        break;
                    case 'f':
                        fg = arg[0] - '0';
                        i++;
                        break;
                    case 'b':
                        bg = arg[0] - '0';
                        i++;
                        break;
                    case 'F':
                        font_src = arg;
                        i++;
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
