#include <stdio.h>
#include "mcu_fatal.h"
#include "mcu_readl.h"

void copier(char cible[], char source[]) {
    int c;
    int i = 0;
    while ((c = source[i]) != '\0') {
        cible[i] = c;
        i++;
    }
    cible[i+1] = '\0';
}

