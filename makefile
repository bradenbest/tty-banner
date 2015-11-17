all:
	cd src && $(MAKE)
	mv src/tty-banner .

install: all
	mv tty-banner /usr/local/bin -i

uninstall:
	rm /usr/local/bin/tty-banner -i

clean:
	cd src && $(MAKE) clean

.PHONY: all install uninstall clean
