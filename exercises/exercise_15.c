#include <stdio.h>
#include <string.h>

// Função para ler nomes
void lerNomes(char nomes[][20], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Digite nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }
}

int main() {
    char nomes[5][20];
    int length = sizeof(nomes) / sizeof(nomes[0]);
    lerNomes(nomes, length);

    printf("\nNomes digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}   