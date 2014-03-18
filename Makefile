TARGET=tty-banner

all:
	cd src && $(MAKE)
	mv src/$(TARGET) ./
clean:
	cd src && $(MAKE) clean
install: all
	mv $(TARGET) /usr/local/bin
uninstall:
	rm /usr/local/bin/$(TARGET)

.PHONY: all clean install uninstall
