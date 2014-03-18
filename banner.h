#ifndef DELAY
#  define DELAY 0
#endif
#ifndef COLOR
#  define COLOR "7"
#endif
#define _col "\033[0;30;4" COLOR "m"
#define _bla "\033[0;37;40m"
#define _1 _col "    "
#define _0 _bla "    "
#define _n "\n"
void banner(char *in);
