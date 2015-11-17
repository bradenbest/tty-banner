tty-banner: default_fnt.h
	gcc tty-banner.c -o $@

strip:
	gcc util/strip.c -o $@

mkheader:
	gcc util/mkheader.c -o $@

default_fnt.h: strip mkheader
	./strip fonts/default.fnt | ./mkheader > $@

clean:
	rm tty-banner strip mkheader default_fnt.h
