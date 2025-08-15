#include <stdio.h>
// print n in decimal

void printd(int n);

int main() {
    printd(123);
    return 0;
}

void printd(int n) {

    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n / 10) {
        printd(n / 10);
        putchar(n % 10 + '0');
    }
}