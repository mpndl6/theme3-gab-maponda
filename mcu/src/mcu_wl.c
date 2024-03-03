#include <stdio.h>
#include "mcu_wl.h"

int main() {
    int n = count_line();
    printf("%i\n", n);
    return 0;
}
