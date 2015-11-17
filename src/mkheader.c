#include <stdio.h>

#ifndef VARNAME
#    define VARNAME "default_fnt"
#endif

int main(void){
    int c,
        cycle = 0;

    printf("unsigned char " VARNAME "[] = {");

    while((c = fgetc(stdin)) != EOF){
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
