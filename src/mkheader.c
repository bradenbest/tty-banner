#include <stdio.h>
#include <stdlib.h>

#ifndef VARNAME
#    define VARNAME "default_fnt"
#endif

int main(int argc, char **argv){
    int c,
        cycle = 0,
        limit = 0;

    if(argc > 1){
        limit = atoi(argv[1]);
    }
    printf("unsigned char " VARNAME "[] = {");

    while((c = fgetc(stdin)) != EOF){
        if(cycle == limit && limit > 0){
            break;
        }
        if(cycle++ % 12 == 0){
            printf("\n  ");
        }
        printf("0x%02x, ", c);
    }

    printf( "\n};\n"
            "unsigned int " VARNAME "_len = %u;\n",
            cycle);

    return 0;
}
