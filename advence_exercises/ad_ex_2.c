#include <stdio.h>

void mover_jogador(int *x, int *y, int dx, int dy);

int main() {

    int pos_x = 5;
    int pos_y = 3;

    printf("Antes do movimento: (%d, %d)\n", pos_x, pos_y);

    mover_jogador(&pos_x, &pos_y, 2, -1);

    printf("Depois do movimento: (%d, %d)\n", pos_x, pos_y);

    return 0;
}

void mover_jogador(int *x, int *y, int dx, int dy) {
    *x += dx;
    *y += dy;
}
