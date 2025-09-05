#include <stdio.h>
#include <stdlib.h>

int ler_int() {
    int valor;
    while (scanf("%d", &valor) != 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Entrada inválida. Digite um número inteiro: ");
    }
    return valor;
}

char ler_char() {
    char c;
    while (1) {
        scanf(" %c", &c);
        if (c == 'y' || c == 'n') break;
        printf("Entrada inválida. Digite 'y' ou 'n': ");
    }
    return c;
}

void dobrar_mem(size_t *mem, int **arr) {
    size_t new_size = (*mem) * 2;
    int *temp = realloc(*arr, new_size * sizeof(int));
    if (temp) {
        *arr = temp;
        *mem = new_size;
    } else {
        printf("Erro em alocar memória!\n");
    }
}

int main() {
    printf("Valor inicial para alocar memória: \n");
    int mem_value = ler_int();

    int *arr = malloc(mem_value * sizeof(int));
    if (!arr) return 1;

    size_t capacidade = mem_value;
    size_t count = 0;

    while (1) {
        printf("Adicionar um valor no array: \n");
        int value_arr = ler_int();

        if (count >= capacidade) {
            dobrar_mem(&capacidade, &arr);
        }

        arr[count++] = value_arr;

        printf("Deseja adicionar mais? (y|n)\n");
        char cont = ler_char();
        if (cont != 'y') break;
    }

    for (size_t i = 0; i < count; i++) {
        printf("%zu: %d (%p)\n", i + 1, arr[i], &arr[i]);
    }

    free(arr);
    return 0;
}
