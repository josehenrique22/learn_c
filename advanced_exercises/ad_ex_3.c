#include <stdio.h>

void movimentar_com_limite(int *x, int *y, int dx, int dy);

int main() {

    int pos_x = 9;
    int pos_y = 9;

    printf("Antes de modificar: (%d, %d)\n", pos_x, pos_y);

    movimentar_com_limite(&pos_x, &pos_y, 2, -2);
    
    printf("Depois de modificar: (%d, %d)\n", pos_x, pos_y);


    return 0;
}

void movimentar_com_limite(int *x, int *y, int dx, int dy) {
    int novo_x = *x + dx;
    int novo_y = *y + dy;
    
    if (novo_x >= 0 && novo_x <= 9 && novo_y >= 0 && novo_y <= 9) {

        *x = novo_x;
        *y = novo_y;
    }
}

