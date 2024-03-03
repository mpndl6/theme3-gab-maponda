extern int putchar(int);

int put_digit(int digit) {
    int res;
    /*check if digit is between 0 and 9*/
    if(0 <= digit && digit <= 9)
        res = putchar(48 + (char) digit);
    else res = -1;
    return (res == -1) ? -1: 0;
}

int put_hdigit(int h) {
    int res;
    /*check if digit is between 0 and 15*/
    if (0 <= h && h <= 15) {
        /*if digit in [0, 9]*/
        if (h <= 9)
            res = put_digit(h);
        else res = putchar(55 + (char) h); /*if digit in [10, 15]*/
    }
    else res = -1;
    return (res == -1) ? -1: 0;
}

int putdec(int d) {
    int div;
    int digit;

    if (d == 0) return put_digit(0);

    div = 1000000000;

    if (d < 0) {
        putchar('-');
        d = -d;
    }

    /*calculate div*/
    while (d / div == 0) {
        div = div / 10;
    }

    while (div >= 1) {
        digit = d / div;
        if (digit < 0) digit = -digit;
        if (put_digit(digit) == -1) return -1;
        d = d % div;
        div = div / 10;
    }
    return 0;
}

int putbin(unsigned int b) {
    unsigned int mask;
    int digit;

    if (b == 0) return put_digit(0);

    mask = 0x80000000;

    /*calculate mask*/
    while ((b & mask) == 0) {
        mask = mask >> 1;
    }
    while (mask > 0) {
        if ((b & mask) > 0) {
            digit = 1;
        }
        else {
            digit = 0;
        }
        if(put_digit(digit) == -1) return -1;
        mask = mask >> 1;
    }
    return 0;
}

int puthex(int h) {
    unsigned int mask;
    int digit;

    if (h == 0) return put_digit(0);

    mask = 0xF0000000;

    /*calculate mask*/
    while ((h & mask) == 0) {
        mask = mask >> 4;
    }
    while (mask > 0) {
        digit = h & mask;
        if(put_digit(digit) == -1) return -1;
        mask = mask >> 4;
    }
    return 0;
}