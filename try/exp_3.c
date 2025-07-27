#include <stdio.h>
// Mostra o nome da variável ou função com retorno a um tipo de dado
#define name_of(x) #x

int main() {
    int var = 42;
    printf("The name of the variable is: %s\n", name_of(my_variable));
    return 0;
}