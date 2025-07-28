#include <stdio.h>

// criar função com 2 parametros int ponteiros -> soma os dois ponteiros -> retorna o valor dos dois ponteiros na main

int soma(int *a, int *b); // sempre defino a função em cima por que C ler de cima para baixo e gosto de colocar as funções em baixo, já que venho da linguagem c#

int main() {
    int a = 2, b = 2;
    int somar = soma(&a, &b); // passar o valor da referencia.
    printf("Valor da soma: %d\n", somar); // decidir passar a função em uma variável, acho mais limpo.
    return 0;
}

int soma(int *a, int *b) {
    return *a + *b; // Lembrar que *é o valor.
}