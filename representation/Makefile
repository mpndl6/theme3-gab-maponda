CFLAGS=-ansi -Wall -pedantic
CC = gcc

all: input output

input: obj/input.o
	$(CC) -$(CFLAGS) $< -o $@
output: output.o
	$(CC) -$(CFLAGS) $< -o $@
input.o: input.c commun.h
	$(CC) -$(CFLAGS) $< -c
output.o: output.c commun.h
	gcc output.c -c $<

test: input output
	./output > etudiant.bin
	./input < etudiant.bin
	hexdump ./data.bin

move:
	mv *.o obj/

clean:
	rm -f *.o output input data.bin

.PHONY: all clean


