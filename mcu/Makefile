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

mcu_test: src/obj/mcu_test.o src/obj/mcu_putint.o src/obj/mcu_readl.o src/obj/mcu_fatal.o
	$(CC) $(CFLAGS) ^$ -o $(BUILD)$@

clean:
	rm -f $(SRCDIR)*.o
	rm -f $(SRCDIR)*.gch
	rm -f *.o
	rm -f *.gch


.PHONY: all clean

