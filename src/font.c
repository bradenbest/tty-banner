#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "default_fnt.h"
#include "font.h"

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

    if(!strcmp(font_src, "self")){
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
    if(buf){
        free(buf);
    }
    return font;
}
