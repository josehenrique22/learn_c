#include <stdio.h>

void movimentar_com_obstaculos (int *x, int *y, int dx, int dy, int mapa[10][10]);
void imprimir_mapa(int mapa[10][10], int jogador_x, int jogador_y);

int main() {

    int mapa[10][10] = {0};

    mapa[4][6] = 1;
    mapa[2][8] = 1;
    mapa[3][7] = 1;
    mapa[2][9] = 1;

    int pos_x = 4;
    int pos_y = 2;

    printf("Mapa antes:\n");
    imprimir_mapa(mapa, pos_x, pos_y);

    // movimentar
    movimentar_com_obstaculos(&pos_x, &pos_y, -2, 6, mapa);

    printf("Mapa depois: \n");
    imprimir_mapa(mapa, pos_x, pos_y);


    printf("Posicao Atual: (%d, %d)\n", pos_x, pos_y);

    return 0;
}


void movimentar_com_obstaculos (int *x, int *y, int dx, int dy, int mapa[10][10]) {
    int novo_x = *x + dx;
    int novo_y = *y +dy;

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
            if (x == jogador_x && y == jogador_y) {
                printf("@");
            } else if(mapa[y][x] == 1) {
                printf("# ");
            } else {
                printf(". ");
            }
        }

        printf("\n");
    }
}
