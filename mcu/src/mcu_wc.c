#include <stdio.h>

int count_char(void) {
    int i = 0;
    while (getchar() != EOF) {
        i++;
    }
    return i;
}

int main(void) {
    int n = count_char();
    printf("%i\n", n);
    return 0;
}

