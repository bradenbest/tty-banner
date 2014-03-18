# tty-banner

Creates a colorful banner

How it works
-
Every char is 4 x 5 "cells", the fourth column being reserved for kerning purposes. Padding, if you will.

For example, an L would look like this:

    [x] [ ] [ ] [ ]
    
    [x] [ ] [ ] [ ]
    
    [x] [ ] [ ] [ ]
    
    [x] [ ] [ ] [ ]
    
    [x] [x] [x] [ ]

As for "cells", in a terminal, I noticed that the most "squarey" shape you can get from monospace characters is 4x2

That is, 4 spaces, on 2 rows

    ####
    ####

So, after figuring all that out, I defined two space characters that were colored with blue and black respectively

    #define _1 "\033[1;34;44m    "
    #define _0 "\033[0;37;40m    "
    #define _n "\n"

_1 has a blue background, and it colors four spaces<br>
_0 is the same thing, but with default colors<br>
_n is a newline

To change the color, edit the Makefile. I plan to fix this to **not** use a Makefile, and instead use an .h file
