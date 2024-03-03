CFLAGS=-ansi -Wall -pedantic
SRCDIR = src/obj
CC = gcc

all: input output

mcu_fatal.o: src/mcu_fatal.c
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_readl.o: src/mcu_readl.c src/mcu_fatal.h src/mcu_macros.h
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_macros.o: src/mcu_macros.h
	$(CC) $(CFLAGS) -c $< -o $@

mcu_fatal.o: src/mcu_fatal.h
	$(CC) $(CFLAGS) -c $< -o $@

mcu_readl.o: src/mcu_readl.h
	$(CC) $(CFLAGS) -c $< -o $@

mcu_putint.o: src/mcu_putint.h
	$(CC) $(CFLAGS) -c $< -o $@

mcu_test.o: src/mcu_test.c src/mcu_macros.h src/mcu_fatal.h src/mcu_readl.h src/mcu_putint.h
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_putint.o: src/mcu_putint.c
	$(CC) $(CFLAGS) -c $(SRC)$@

main :

test: input output
	./output > data.bin
	./input < data.bin
	hd ./data.bin

clean:
	rm -f *.o output input data.bin

.PHONY: all clean

