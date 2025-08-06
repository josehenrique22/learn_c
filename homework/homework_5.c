#include <stdio.h>

/*
    Crie um programa em C que:

    Usa uma matriz 10x10 para o mapa

    Representa o jogador com @, obstáculos com #, espaço livre com .

    Coloca ao menos 4 obstáculos fixos

    Posição inicial do jogador é (5, 5)

    Implementa uma função void mover(int *x, int *y, int dx, int dy, int mapa[10][10]) que:

    Move o jogador se não houver obstáculo

    Impede sair dos limites

    No main:

    Imprima o mapa

    Tente mover o jogador em ao menos três direções

    Imprima o mapa após cada movimento

*/

void mover(int *x, int *y, int dx, int dy, int mapa[10][10]);
void imprimir_mapa(int mapa[10][10], int jogador_x, int jogador_y);

int main() {

    int mapa[10][10] = {0};

    mapa[2][4] = 1;
    mapa[5][1] = 1;
    mapa[6][6] = 1;
    mapa[2][5] = 1;

    int pos_x = 4;
    int pos_y = 2;

    printf("Mapa antes: \n");
    imprimir_mapa(mapa, pos_x, pos_y);

    mover(&pos_x, &pos_y, 2, -1, mapa);
    printf("Mapa depois: \n");
    imprimir_mapa(mapa, pos_x, pos_y);

    mover(&pos_x, &pos_y, 3, 2, mapa);
    printf("Mapa depois: \n");
    imprimir_mapa(mapa, pos_x, pos_y);

    mover(&pos_x, &pos_y, -1, -1, mapa);
    printf("Mapa antes: \n");
    imprimir_mapa(mapa, pos_x, pos_y);



    return 0;
}

void mover(int *x, int *y, int dx, int dy, int mapa[10][10]) {
    int novo_x = *x + dx;
    int novo_y = *y + dy;
    if (novo_x >= 0 && novo_x <= 9 && novo_y >= 0 && novo_y <= 9) {
        
        if (mapa[novo_y][novo_x] == 0) {
            
            *x = novo_x;
            *y = novo_y;
        }
    }
}

void imprimir_mapa(int mapa[10][10], int jogador_x, int jogador_y) {
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            if (jogador_x == x && jogador_y == y) {
                printf("@ ");
            } else if (mapa[y][x] == 1) {
                printf("# ");
            } else {
                printf(". ");
            }
        }

        printf("\n");
    }
}
