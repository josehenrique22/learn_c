#include <stdio.h>

/*
    Exercício 1 – Retornar o endereço do maior valor de um array
    A função recebe:

    um ponteiro para o array (int *arr)

    e o tamanho do array (int tamanho)

    Cria uma variável ponteiro maior que começa apontando para o primeiro elemento.

    Percorre o array:

    se encontrar um valor maior do que *maior, atualiza maior.

    Ao final, retorna maior (um int *).

*/

int *encontrar_maior(int *arr, int tamanho);

int main() {

    int arr[] = {4, 10, 20, 89};

    int *maior = encontrar_maior(arr, 4);

    printf("Valor maior: %d", *maior);

    return 0;
}

int *encontrar_maior(int *arr, int tamanho) {
    int *maior = arr;

    for (int i = 1; i < tamanho; i++) { 
        if (*(arr + i) > *maior) {
            maior = arr + i;
        }
    }

    return maior;  
}
