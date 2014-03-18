// Warning: this file is ugly
// Don't expect this to work in windows
// Dunno about OS X

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "banner.h"

void reset(){
  printf(_0 _n);
}

void newline(){
  printf(_n);
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
                printf(_0 _1 _0 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case 'b':
          case 'B':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'c':
          case 'C':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _0 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'd':
          case 'D':
            switch(i){
              case 0:
                printf(_1 _1 _0 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _0 _0);
                break;
            }
            break;
          case 'e':
          case 'E':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'f':
          case 'F':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _0 _0 _0);
                break;
            }
            break;
          case 'g':
          case 'G':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'h':
          case 'H':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case 'i':
          case 'I':
            switch(i){
              case 0:
                printf(_0 _1 _0 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case 'j':
          case 'J':
            switch(i){
              case 0:
                printf(_0 _0 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_0 _0 _1 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'k':
          case 'K':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case 'l':
          case 'L':
            switch(i){
              case 0:
                printf(_1 _0 _0 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _0 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'm':
          case 'M':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _1 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case 'n':
          case 'N':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case '0':
          case 'o':
          case 'O':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'p':
          case 'P':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _0 _0 _0);
                break;
            }
            break;
          case 'q':
          case 'Q':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _1);
                break;
            }
            break;
          case 'r':
          case 'R':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case '5':
          case 's':
          case 'S':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 't':
          case 'T':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case 'u':
          case 'U':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case 'v':
          case 'V':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case 'w':
          case 'W':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _1 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case 'x':
          case 'X':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case 'y':
          case 'Y':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case 'z':
          case 'Z':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          // 0 - 9
          // for 0, see O
          // for 5, see S
          case '1':
            switch(i){
              case 0:
                printf(_0 _1 _0 _0);
                break;
              case 1:
                printf(_1 _1 _0 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case '2':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case '3':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case '4':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_0 _0 _1 _0);
                break;
            }
            break;
          case '6':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case '7':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_0 _0 _1 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_0 _0 _1 _0);
                break;
            }
            break;
          case '8':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case '9':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          // symbols / specal chars
          case ' ':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _0 _0 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case '!':
            switch(i){
              case 0:
                printf(_1 _0 _0 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_1 _0 _0 _0);
                break;
            }
            break;
          case '@':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _1 _1 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case '#':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _1 _1 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_1 _1 _1 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case '$':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _1 _0 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_0 _1 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _0);
                break;
            }
            break;
          case '%':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _0 _1 _0);
                break;
            }
            break;
          case '^':
            switch(i){
              case 0:
                printf(_0 _1 _0 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case '&':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_1 _1 _1 _0);
                break;
              case 3:
                printf(_1 _0 _1 _0);
                break;
              case 4:
                printf(_1 _1 _1 _1);
                break;
            }
            break;
          case '*':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_1 _0 _1 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case '(':
            switch(i){
              case 0:
                printf(_0 _1 _0 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_1 _0 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case ')':
            switch(i){
              case 0:
                printf(_0 _1 _0 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_0 _0 _1 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case '{':
            switch(i){
              case 0:
                printf(_0 _1 _1 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_1 _1 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_0 _1 _1 _0);
                break;
            }
            break;
          case '}':
            switch(i){
              case 0:
                printf(_1 _1 _0 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _1 _1 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_1 _1 _0 _0);
                break;
            }
            break;
          case '[':
            switch(i){
              case 0:
                printf(_0 _1 _1 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_0 _1 _1 _0);
                break;
            }
            break;
          case ']':
            switch(i){
              case 0:
                printf(_1 _1 _0 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_1 _1 _0 _0);
                break;
            }
            break;
          case '-':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _0 _0 _0);
                break;
              case 2:
                printf(_1 _1 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case '=':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_1 _1 _1 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_1 _1 _1 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case '_':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _0 _0 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_1 _1 _1 _1);
                break;
            }
            break;
          case '+':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _0 _0 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_1 _1 _1 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case '/':
            switch(i){
              case 0:
                printf(_0 _0 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_1 _0 _0 _0);
                break;
              case 4:
                printf(_1 _0 _0 _0);
                break;
            }
            break;
          case '\\':
            switch(i){
              case 0:
                printf(_1 _0 _0 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _0 _1 _0);
                break;
              case 4:
                printf(_0 _0 _1 _0);
                break;
            }
            break;
          case ',':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _0 _0 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                switch(k){ // I'll admit that I'm cheating here by straying from the model I set up.
                  case 2:
                    printf(_0 _1 _0 _0);
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
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _0 _0 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case '<':
            switch(i){
              case 0:
                printf(_0 _0 _1 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_1 _0 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_0 _0 _1 _0);
                break;
            }
            break;
          case '>':
            switch(i){
              case 0:
                printf(_1 _0 _0 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _0 _1 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_1 _0 _0 _0);
                break;
            }
            break;
          case '?':
            switch(i){
              case 0:
                printf(_1 _1 _1 _0);
                break;
              case 1:
                printf(_0 _0 _1 _0);
                break;
              case 2:
                printf(_0 _1 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _1 _0 _0);
                break;
            }
            break;
          case '\'':
            switch(i){
              case 0:
                printf(_1 _0 _0 _0);
                break;
              case 1:
                printf(_1 _0 _0 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case '"':
            switch(i){
              case 0:
                printf(_1 _0 _1 _0);
                break;
              case 1:
                printf(_1 _0 _1 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _0 _0 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case ':':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                printf(_0 _1 _0 _0);
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
          case ';':
            switch(i){
              case 0:
                printf(_0 _0 _0 _0);
                break;
              case 1:
                printf(_0 _1 _0 _0);
                break;
              case 2:
                printf(_0 _0 _0 _0);
                break;
              case 3:
                switch(k){
                  case 2:
                    printf(_0 _1 _0 _0);
                    break;
                  case 1:
                    printf(_0 _bla "  " _col "  " _0 _0);
                    break;
                }
                break;
              case 4:
                printf(_0 _0 _0 _0);
                break;
            }
            break;
        }
        if(DELAY)usleep(DELAY * 1000);
        j++;
      }
      newline();
    }
    i++;
  }
  reset();
}
