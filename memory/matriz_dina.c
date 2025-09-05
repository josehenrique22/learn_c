#include <stdio.h>
#include <stdlib.h>

void dobrar_mem(size_t *mem, float** matriz) {
    size_t new_size = (*mem) * 2;
    float *temp = realloc(*matriz, new_size * sizeof(float));
    if (temp) {
        *matriz = temp;
        *mem = new_size;
        printf("Memória realocada! Nova capacidade: %zu elementos\n", new_size);
    } else {
        printf("Erro em alocar memória!\n");
    }
}

int main() {
    size_t capacidade = 4;
    float *matriz = malloc(capacidade * sizeof(float));
    if (!matriz) return 1;

    int linhas = 3, colunas = 3;
    size_t count = 0;

    int i = 0, j = 0;
    while (i < linhas) {
        j = 0;
        while (j < colunas) {
            if (count >= capacidade) {
                dobrar_mem(&capacidade, &matriz);
            }

            printf("Digite valor para [%d][%d]: ", i, j);
            scanf("%f", &matriz[i * colunas + j]);
            count++;

            printf("Valor armazenado: %.2f no endereco %p\n", 
                    matriz[i * colunas + j], 
                    (void*)&matriz[i * colunas + j]);

            j++;
        }
        i++;

        char finish;
        printf("Deseja termina a operaçao ? (y|n)");
        scanf(" %c", &finish);

        if (finish == 'y') break;
    }

    printf("\nMatriz final:\n");
    i = 0;
    while (i < linhas) {
        j = 0;
        while (j < colunas) {
            printf("%.2f ", matriz[i * colunas + j]);
            j++;
        }
        printf("\n");
        i++;
    }

    free(matriz);
    return 0;
}
