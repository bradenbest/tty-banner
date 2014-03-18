FLAGS=-Wall -O2
TARGET=tty-banner
OBJS=main.o banner.o

all: $(OBJS)
	gcc $(OBJS) -o $(TARGET) $(FLAGS)

main.o: main.c
	gcc -c main.c
banner.o: banner.c banner.h config.h
	gcc -c banner.c

clean:
	rm $(OBJS)

.PHONY: all clean
