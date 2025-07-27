#include <stdio.h>

void dobrar(int *n);
// passa ponteiro -> ponteiro ira alterar o valor da variável comum -> ira multiplicar a variável comum
int main() {
    int valor = 10;
    dobrar(&valor);

    printf("Valor: %d\n", valor);
    return 0;
}

void dobrar(int *n) {
    *n = *n * 2;
}