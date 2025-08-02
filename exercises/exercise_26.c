#include <stdio.h>

void trocar(int *a, int *b);

int main() {

    int a = 5, b = 10;
    trocar(&a, &b);

    printf("primeiro valor: %d -- segundo valor: %d\n", a, b);

    return 0;
}

void trocar(int *a, int *b) {
    int temp_a = *a;
    int temp_b = *b;

    *a = temp_b;
    *b = temp_a;
}