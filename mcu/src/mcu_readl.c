#include <stdlib.h>
#include <stdio.h>
#include "mcu_fatal.h"
#include "mcu_macros.h"

int readl(char line[]) {
    int c, i = 0;
    while ((c = getchar()) != EOF) {
        line[i++] = c;
        if(i>MAXLINE){
            fatal(i >= MAXLINE, "Too long", 2);
        }
        if (c == '\n') {
            line[i] = 0;
            return i;
        }
    }
    line[i] = 0;
    return EOF;
}
