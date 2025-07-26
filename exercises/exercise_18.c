#include <stdio.h>

/* Delcarar a variável comum -> passar o valor para a variável comum 
   -> depois declarar um ponteiro -> passar o endereço da variável comum para o ponteiro 
   -> imprimir a variável comum e o ponteiro para checar se tem o mesmo valor
*/
int main() {
    int a = 25;
    int *ptr = &a; //  <- apontando ao endereço na memoria de [a] ou seja o valor armazenado é igual [a]

    printf("Valor de a: %d\n", a);
    printf("Valor do ponteiro [ptr]: %d\n", *ptr);

    // Bonus -> checar se estão no mesmo local na memoria.
    printf("Local na memoria de [a]: %p\n", &a);
    printf("Local na memoria de [ptr]: %p\n", ptr);


    return 0;
}