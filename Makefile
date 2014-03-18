# COLOR
#   0 = black
#   1 = red
#   2 = green
#   3 = orange
#   4 = blue
#   5 = purple
#   6 = pale blue
#   7 = white
# DELAY = delay in miliseconds
OPTS=-DCOLOR=\"2\" -DDELAY=0
FLAGS=-Wall -O2
TARGET=tty-banner
FILES=main.c banner.c

$(TARGET): $(FILES)
	gcc $^ $(FLAGS) -o $(TARGET) $(OPTS)

install: $(TARGET)
	mv $(TARGET) /usr/local/bin/

uninstall: 
	rm /usr/local/bin/$(TARGET)

.PHONY: $(TARGET)
