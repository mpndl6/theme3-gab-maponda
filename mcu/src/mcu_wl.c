#include <stdio.h>

int count_line(void){
    int c;
    int i = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            i++;
    }
    return i;
}
int main(void) {
    int n = count_line();
    printf("%i\n", n);
    return 0;
}
