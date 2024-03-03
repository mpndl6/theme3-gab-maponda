#include <stdio.h>

int count_char() {
    int i = 0;
    while (getchar() != EOF) {
        i++;
    }
    return i;
}

int main() {
    int n = count_char();
    printf("%i\n", n);
    return 0;
}

