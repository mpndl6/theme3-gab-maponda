CFLAGS=-ansi -Wall -pedantic
SRCDIR = src/
CC = gcc
BUILD =build/
OBJECT =

all: mcu_test mcu_wc mcu_uniq mcu_revx

mcu_fatal.o: src/mcu_fatal.c
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_readl.o: src/mcu_readl.c src/mcu_fatal.h src/mcu_macros.h
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_macros.o: src/mcu_macros.h
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_test.o: src/mcu_test.c src/mcu_macros.h src/mcu_fatal.h src/mcu_readl.h src/mcu_putint.h
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_putint.o: src/mcu_putint.c
	$(CC) $(CFLAGS) -c $< -o $(SRCDIR)$@

mcu_test: src/mcu_test.o src/mcu_putint.o src/mcu_readl.o src/mcu_fatal.o
	$(CC) $(CFLAGS) -o $(BUILD)$@ $^

mcu_wl.o: src/mcu_wl.c
	$(CC) $(CFLAGS) -c $^ -o $(SRCDIR)$@

mcu_wl: $(SRCDIR)mcu_wl.o
	$(CC) $(CFLAGS) $^ -o $(BUILD)$@

mcu_wc: $(SRCDIR)mcu_wc.c
	$(CC) $(CFLAGS) -o $(BUILD)$@ $^

mcu_rev.o: $(SRCDIR)mcu_rev.c
	$(CC) $(CFLAGS) -c $^ -o $(SRCDIR)$@

mcu_rev: $(SRCDIR)mcu_rev.o $(SRCDIR)mcu_readl.o $(SRCDIR)mcu_fatal.o
	$(CC) $(CFLAGS) -o $(BUILD)$@ $^

mcu_uniq.o : $(SRCDIR)mcu_uniq.c
	$(CC) $(CFLAGS) -c $< -o $@

mcu_uniq: $(SRCDIR)mcu_uniq.o  $(SRCDIR)mcu_readl.o $(SRCDIR)mcu_fatal.o
	$(CC) $(CFLAGS) $^ -o $(BUILD)$@


clean:
	rm -f $(SRCDIR)*.o
	rm -f $(SRCDIR)*.gch
	rm -f src/*.o
	rm -f src/*.gch

move:
	mv src/*.o src/obj/


.PHONY: all clean

