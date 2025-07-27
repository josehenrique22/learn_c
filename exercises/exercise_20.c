#include <stdio.h>

// valor de a sera o valor de b e vice versa - criar variáveis temporarias para guarda o valor
// das variáveis comuns para salvar antes da modificações.
void trocar (int *a, int *b) { // a = 10 b = 20
    // guarda o valor de a
    int guardar_a = *a; 
    // guarda o valor de b;
    int guardar_b = *b;

    *a = guardar_b;
    *b = guardar_a;
    
}

int main() {
    int valor_1 = 10;
    int valor_2 = 20;
    int temp_v_1 = valor_1;
    int temp_v_2 = valor_2;

    trocar(&valor_1, &valor_2);

    printf("valor antes de modificar 1: %d\n", temp_v_1);
    printf("valor antes de modificar 2: %d\n", temp_v_2);
    printf("valor modificado 1: %d\n", valor_1);
    printf("valor modificado 2: %d\n", valor_2);
    
    return 0;
}