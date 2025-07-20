#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][20]; // 5 nomes 19 letras 

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome %d: \n", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("Nomes digitados: \n");

    for (int j = 0; j < 5; j++) {
        printf("%d: %s\n", j + 1, nomes[j]);
    }

    // não foi tão ruim, acho que estava confundido com algo que fiz na escola de matrizes que precisava usar um loop
    // dentro de outro loop tipo array[i][j] então entrei em panico, mas eu vi que tudo que aprendi foi aplicado aqui
    // foi ate simples. e oque são vetores ? nesse caso ?

    return 0;
}