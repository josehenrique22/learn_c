#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int *arr = malloc(size * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Erro ao alocar memoria!\n");
        return 1;
    }

    for (size_t i = 0; i < 100; i++) {
        if (i >= size) {
            size = size * 2;
            int *tmp = realloc(arr, size * sizeof(int));
            if (tmp == NULL) {
                free(arr);
                fprintf(stderr, "Erro ao realocar memoria!\n");
                return 1;
            }
            arr = tmp;
            printf("Memoria alocada com sucesso!");
        }

        arr[i] = i + 1;
    }

    for (size_t i = 0; i < 100; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}
