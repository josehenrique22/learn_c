#include <stdio.h>

/*
Ela deve retornar o endereço do primeiro valor do array que seja múltiplo de n.

Se não encontrar nenhum, deve retornar NULL.

No main, verifique se o ponteiro retornado é NULL. Se não for, imprima o valor.
*/

int *primeiro_multiplo_de(int *arr, int tamanho, int n);

int main() {

    int arr[] = {2, 4, 6, 10};

    int *multiplo_print = primeiro_multiplo_de(arr, 4, 2);

    if (multiplo_print != NULL) {
        printf("Numero multiplo: %d\n", *multiplo_print);
    } else {
        printf("Nenhum numero multiplo encontrado! \n");
    }

    return 0;
}

int *primeiro_multiplo_de(int *arr, int tamanho, int n) {
    for (int i = 0; i < tamanho; i++) {
        if (*(arr + i) % n == 0) {
            return arr + i;
        } 
            
    }

    return NULL;
}