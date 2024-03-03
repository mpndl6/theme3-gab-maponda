CFLAGS=-ansi -Wall -pedantic

all: input output

input: input.o

output: output.o
	gcc $< -o $@
input.o: input.c commun.h

output.o: output.c commun.h
	gcc output.c -c $<

test: input output
	./output > etudiant.bin
	./input < data.bin
	hexdump ./data.bin

move:
	mv *.o obj/

clean:
	rm -f *.o output input data.bin

.PHONY: all clean


