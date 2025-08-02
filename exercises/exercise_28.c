#include <stdio.h>

void dobrar(int *arr, int tamanho);

int main() {

    int arr[] = {2, 2, 2, 2};

    dobrar(arr, 4);

    return 0;
}

void dobrar(int *arr, int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        *(arr + i) *= 2;

        printf("Array multiplicado por 2: %d\n", *(arr + i));
    }
}