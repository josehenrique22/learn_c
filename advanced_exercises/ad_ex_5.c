#include <stdio.h>

struct jogador {
    int x;
    int y;
};

struct jogador player;

void mover(struct jogador *j) {
    j->x += 1;
    j->y += 1;
}

int main() {
    
    mover(&player);
    printf("Posicao jogador (x: %d y: %d)\n", player.x, player.y);
    return 0;
}