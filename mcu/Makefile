CFLAGS=-ansi -Wall -pedantic
SRCDIR = src
CC = gcc

all: input output

main: mcu_fatal.o mcu_readl.o mcu_test.c

output: output.o

input.o: ../representation/input.c commun.h

output.o: ../representation/output.c commun.h

test: input output
	./output > data.bin
	./input < data.bin
	hd ./data.bin

clean:
	rm -f *.o output input data.bin

.PHONY: all clean

