#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "banner.h"

static void reset(){
  printf(_0 _n);
  fflush(stdout);
}

static void newline(){
  printf(_n);
}

static void printcell(int cell){
  if(cell)
    printf(_1);
  else{
    printf(_0);
  }

  fflush(stdout);

  if(DELAY){
    usleep(DELAY * 1000);
  }
}

static void println(int block1, int block2, int block3, int block4){
  printcell(block1);
  printcell(block2);
  printcell(block3);
  printcell(block4);
}

void banner(char *in){
  int i = 0, 
      j = 0, 
      k = 3;
  newline();
  while(i < 5){
    k = 3;
    while(--k){
      j = 0;
      while(j < strlen(in)){
        switch((int)in[j]){
          // A - Z
          case 'a':
          case 'A':
            switch(i){
              case 0:
                println(0, 1, 0, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case 'b':
          case 'B':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'c':
          case 'C':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 0, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'd':
          case 'D':
            switch(i){
              case 0:
                println(1, 1, 0, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 0, 0);
                break;
            }
            break;
          case 'e':
          case 'E':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'f':
          case 'F':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 0, 0, 0);
                break;
            }
            break;
          case 'g':
          case 'G':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'h':
          case 'H':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case 'i':
          case 'I':
            switch(i){
              case 0:
                println(0, 1, 0, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case 'j':
          case 'J':
            switch(i){
              case 0:
                println(0, 0, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(0, 0, 1, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'k':
          case 'K':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case 'l':
          case 'L':
            switch(i){
              case 0:
                println(1, 0, 0, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 0, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'm':
          case 'M':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 1, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case 'n':
          case 'N':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case '0':
          case 'o':
          case 'O':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'p':
          case 'P':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 0, 0, 0);
                break;
            }
            break;
          case 'q':
          case 'Q':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 1);
                break;
            }
            break;
          case 'r':
          case 'R':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case '5':
          case 's':
          case 'S':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 't':
          case 'T':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case 'u':
          case 'U':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case 'v':
          case 'V':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case 'w':
          case 'W':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 1, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case 'x':
          case 'X':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case 'y':
          case 'Y':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case 'z':
          case 'Z':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          // 0 - 9
          // for 0, see O
          // for 5, see S
          case '1':
            switch(i){
              case 0:
                println(0, 1, 0, 0);
                break;
              case 1:
                println(1, 1, 0, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case '2':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case '3':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case '4':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(0, 0, 1, 0);
                break;
            }
            break;
          case '6':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case '7':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(0, 0, 1, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(0, 0, 1, 0);
                break;
            }
            break;
          case '8':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case '9':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          // symbols / specal chars
          case ' ':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 0, 0, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case '!':
            switch(i){
              case 0:
                println(1, 0, 0, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(1, 0, 0, 0);
                break;
            }
            break;
          case '@':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 1, 1, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case '#':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 1, 1, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(1, 1, 1, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case '$':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 1, 0, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(0, 1, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 0);
                break;
            }
            break;
          case '%':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 0, 1, 0);
                break;
            }
            break;
          case '^':
            switch(i){
              case 0:
                println(0, 1, 0, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case '&':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(1, 1, 1, 0);
                break;
              case 3:
                println(1, 0, 1, 0);
                break;
              case 4:
                println(1, 1, 1, 1);
                break;
            }
            break;
          case '*':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(1, 0, 1, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case '(':
            switch(i){
              case 0:
                println(0, 1, 0, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(1, 0, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case ')':
            switch(i){
              case 0:
                println(0, 1, 0, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(0, 0, 1, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case '{':
            switch(i){
              case 0:
                println(0, 1, 1, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(1, 1, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(0, 1, 1, 0);
                break;
            }
            break;
          case '}':
            switch(i){
              case 0:
                println(1, 1, 0, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 1, 1, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(1, 1, 0, 0);
                break;
            }
            break;
          case '[':
            switch(i){
              case 0:
                println(0, 1, 1, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(0, 1, 1, 0);
                break;
            }
            break;
          case ']':
            switch(i){
              case 0:
                println(1, 1, 0, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(1, 1, 0, 0);
                break;
            }
            break;
          case '-':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 0, 0, 0);
                break;
              case 2:
                println(1, 1, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case '=':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(1, 1, 1, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(1, 1, 1, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case '_':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 0, 0, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(1, 1, 1, 1);
                break;
            }
            break;
          case '+':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 0, 0, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(1, 1, 1, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case '/':
            switch(i){
              case 0:
                println(0, 0, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(1, 0, 0, 0);
                break;
              case 4:
                println(1, 0, 0, 0);
                break;
            }
            break;
          case '\\':
            switch(i){
              case 0:
                println(1, 0, 0, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 0, 1, 0);
                break;
              case 4:
                println(0, 0, 1, 0);
                break;
            }
            break;
          case ',':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 0, 0, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                switch(k){ // I'll admit that I'm cheating here by straying from the model I set up.
                  case 2:
                    println(0, 1, 0, 0);
                    break;
                  case 1:
                    printf(_0 _bla "  " _col "  " _0 _0);
                    break;
                }
                break;
            }
            break;
          case '.':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 0, 0, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case '<':
            switch(i){
              case 0:
                println(0, 0, 1, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(1, 0, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(0, 0, 1, 0);
                break;
            }
            break;
          case '>':
            switch(i){
              case 0:
                println(1, 0, 0, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 0, 1, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(1, 0, 0, 0);
                break;
            }
            break;
          case '?':
            switch(i){
              case 0:
                println(1, 1, 1, 0);
                break;
              case 1:
                println(0, 0, 1, 0);
                break;
              case 2:
                println(0, 1, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 1, 0, 0);
                break;
            }
            break;
          case '\'':
            switch(i){
              case 0:
                println(1, 0, 0, 0);
                break;
              case 1:
                println(1, 0, 0, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case '"':
            switch(i){
              case 0:
                println(1, 0, 1, 0);
                break;
              case 1:
                println(1, 0, 1, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 0, 0, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case ':':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                println(0, 1, 0, 0);
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
          case ';':
            switch(i){
              case 0:
                println(0, 0, 0, 0);
                break;
              case 1:
                println(0, 1, 0, 0);
                break;
              case 2:
                println(0, 0, 0, 0);
                break;
              case 3:
                switch(k){
                  case 2:
                    println(0, 1, 0, 0);
                    break;
                  case 1:
                    printf(_0 _bla "  " _col "  " _0 _0);
                    break;
                }
                break;
              case 4:
                println(0, 0, 0, 0);
                break;
            }
            break;
        }
        fflush(stdout);
        j++;
      }
      newline();
    }
    i++;
  }
  reset();
}
