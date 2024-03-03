#include <stdlib.h>
#include <stdio.h>

void fatal(int assert, const char message[], int status) {
    if (!assert) {
        char c;
        int i = 0;
        while ((c = message[i]) != '\0') {
            putchar(c);
            i++;
        }
        putchar('\n');
        exit(status);
    }
}
