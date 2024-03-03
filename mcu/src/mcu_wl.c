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

int main() {
    int n = count_line();
    printf("%i\n", n);
    return 0;
}
