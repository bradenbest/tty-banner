FLAGS=-Wall -O2
TARGET=tty-banner
FILES=main.c banner.c

$(TARGET): $(FILES)
	gcc $^ $(FLAGS) -o $(TARGET)

install: $(TARGET)
	mv $(TARGET) /usr/local/bin/

uninstall: 
	rm /usr/local/bin/$(TARGET)

.PHONY: $(TARGET)
