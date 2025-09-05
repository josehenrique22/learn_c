#include <stdio.h>
#include <stdlib.h>

int main() {
    int *inteiro = malloc(sizeof(int*));
    
    *inteiro = 5;

    printf("%p\n", &inteiro);
    printf("%d\n", *inteiro);
    printf("%p\n", *inteiro);

    printf("\n");

    free(inteiro);
    printf("%p\n", &inteiro);
    printf("%d\n", *inteiro);
    printf("%p\n", *inteiro);

    // Quando libera memoria, o valor atribuido some.

    return 0;
}