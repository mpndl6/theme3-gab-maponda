#include <stdio.h>

int count_line() {
    int c;
    int i = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            i++;
    }
    return i;
}
