#include <stdio.h>

int main() {
    int idade = 30;
    int *ptr = &idade;

    printf("Endereço de idade: %p\n", &idade);
    printf("Conteúdo do ponteiro ptr: %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    // Mudar o valor do ponteiro
    *ptr = 99;
    
    printf("Novo valor de idade: %d\n", idade);

    return 0;
}