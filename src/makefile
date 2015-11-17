OBJ = font.o tty-banner.o

tty-banner: default_fnt.h $(OBJ)
	gcc $(OBJ) -o $@

strip:
	gcc util/strip.c -o $@

mkheader:
	gcc util/mkheader.c -o $@

default_fnt.h: strip mkheader
	./strip fonts/default.fnt | ./mkheader > $@

font.o: default_fnt.h
	gcc font.c -c

tty-banner.o: default_fnt.h
	gcc tty-banner.c -c

clean:
	rm tty-banner strip mkheader default_fnt.h $(OBJ)
