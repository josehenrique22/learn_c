#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  // número de elementos
    int *p_malloc, *p_calloc;

    // Usando malloc
    p_malloc = (int *) malloc(n * sizeof(arr[0]));
    if (p_malloc == NULL) {
        printf("Falha ao alocar memoria com malloc\n");
        return 1;
    }

    printf("Conteudo inicial de p_malloc (nao inicializado):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", p_malloc[i]); // pode conter lixo
    }
    printf("\n");

    // Usando calloc
    p_calloc = (int *) calloc(n, sizeof(arr[0]));
    if (p_calloc == NULL) {
        printf("Falha ao alocar memoria com calloc\n");
        return 1;
    }

    printf("Conteudo inicial de p_calloc (inicializado com 0):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", p_calloc[i]); // todos zeros
    }
    printf("\n");

    // Liberando memória
    // libera os dados na memoria
    memset(p_malloc, 0, n * sizeof(int));
    free(p_malloc);
    free(p_calloc);

    return 0;
}
