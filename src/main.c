#include <stdio.h>

#include "banner.h"

int main(int argc, char **argv){
  int i;
  if(argc == 2){
    banner(argv[1]);
  }else if(argc > 2){
    for(i = 1; i < argc; i++){
      banner(argv[i]);
    }
  }else{
    printf("Usage: %s [string1] [string2] ...\n",argv[0]);
  }
  return 0;
}
