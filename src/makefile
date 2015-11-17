all: default_fnt.h
	gcc tty-banner.c -o tty-banner

strip:
	gcc strip.c -o strip

mkheader:
	gcc mkheader.c -o mkheader

default_fnt.h: strip mkheader
	./strip fonts/default.fnt | ./mkheader > default_fnt.h

clean:
	rm tty-banner strip mkheader default_fnt.h
