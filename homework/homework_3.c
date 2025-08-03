#include <stdio.h>

/*
Ela deve retornar o endereço do menor valor dentro de um array de inteiros.

Teste no main com um array de 5 ou 6 números variados.

Imprima o valor do menor elemento usando *ponteiro.
*/

int *encontrar_menor(int *arr, int tamanho);

int main() {

    int arr[] = {2, 3, 4, 5, 7};

    int *numero_menor = encontrar_menor(arr, 5);
    
    printf("Numero menor: %d\n", *numero_menor);

    return 0;
}

int *encontrar_menor(int *arr, int tamanho) {
    int *menor = arr;

    for (int i = 0; i < tamanho; i++) {
        if (*(arr + i) > *menor) {
            menor = arr + i; // memoria
        }
    }

    return menor;
}
