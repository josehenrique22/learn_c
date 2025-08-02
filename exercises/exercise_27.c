#include <stdio.h>

void zerar_tudo(int *arr, int tamanho);

int main() {

    int arr[] = {2, 2, 2, 2};

    zerar_tudo(arr, 4);

    return 0;
}

void zerar_tudo(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(arr + i) = 0;
        
        printf("Array zerado: %d\n", *(arr + i));

    }
}