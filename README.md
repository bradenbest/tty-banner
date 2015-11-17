# TTY Banner 2.0

This is the 2.x branch of tty-banner.

Rather than use a giant oh-hell-no switch block, this version sources the "font" from a file and stores it in a linked list. Then it just calls upon the font for whatever glyph it needs.

Using the `-F` option, you can specify an alternate font file.

## Usage

To compile, just run `make`. To install, run `sudo make install` after running `make`

To use, simply run the program for usage help. As a quickie, try `tty-banner -t "Hello, World!"`
