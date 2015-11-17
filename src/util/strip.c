#include <stdio.h>

void parse(char *fname){
    FILE *f = fopen(fname, "r");
    int c;

    while((c = fgetc(f)) != EOF){
        switch(c){
            case '\n':
            case ' ':
            case '\t':
                break;
            default:
                fputc(c, stdout);
                break;
        }
    }
    fclose(f);
}

int main(int argc, char **argv){
    if(argc > 1){
        parse(argv[1]);
    } else {
        printf("Usage: %s [file]\n", argv[0]);
        return 1;
    }
    return 0;
}
