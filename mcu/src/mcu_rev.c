#include <stdio.h>

#include "mcu_readl.h"

void rev(char tab[MAXLINE]) {
    int len = 0;
    int i;
    while (tab[len] != '\0') len++;
    for (i = 0; i < len/2; i++) {
        char tmp = tab[i];
        tab[i] = tab[len-i-1];
        tab[len-i-1] = tmp;
    }
}

int main(void) {
    char tab[MAXLINE];
    char c;
    int i = 0;
    while ((c = readl(tab)) != EOF) {
        rev(tab);
        while ((c = tab[i]) != '\0') {
            putchar(c);
            i++;
        }
        i = 0;
        putchar('\n');
    }
    return 0;
}
