    #include <stdio.h>

    struct jogador {
        int x;
        int y;
        char simbolo;
    };

    void imprimir_mapa(int mapa[10][10], struct jogador *jogadores, int num_jogadores);

    void  inicializar_jogador(struct jogador *j, int x, int y, char simbolo);

    int main() {

        int mapa[10][10] = {0};

        mapa[3][3] = 1;
        mapa[4][4] = 1;
        mapa[5][2] = 1;

        int num_jogadores = 3;

        struct jogador player_1, player_2, player_3;

        inicializar_jogador(&player_1, 1, 1, '#');
        inicializar_jogador(&player_2, 2, 2, '@');
        inicializar_jogador(&player_3, 1, 2, '&');

        struct jogador jogadores[3] = {player_1, player_2, player_3};

        imprimir_mapa(mapa, jogadores, num_jogadores);

        for (int i = 0; i < num_jogadores; i++) {
            for (int j = i + 1; j < num_jogadores; j++) {
                if (jogadores[i].x == jogadores[j].x && jogadores[i].y == jogadores[j].y) {
                    printf("Colicao entre '%c' e '%c' na posicao (%d, %d)\n",
                    jogadores[i].simbolo,
                    jogadores[j].simbolo,
                    jogadores[i].x,
                    jogadores[j].y
                    );
                }
            }
        }

        return 0;
    }

    void  inicializar_jogador(struct jogador *j, int x, int y, char simbolo) {
        j->x = x;
        j->y = y;
        j->simbolo = simbolo;
    }

    void imprimir_mapa(int mapa[10][10], struct jogador *jogadores, int num_jogadores) {
        
        for (int y = 0; y < 10; y++) {
            for (int x = 0; x < 10; x++) {
                int jogador_encontrado = 0;

                for (int i = 0; i < num_jogadores; i++) {
                    if ((jogadores + i)->x == x && (jogadores + i)->y == y) {
                        printf("%c ", (jogadores + i)->simbolo);
                        jogador_encontrado = 1;
                        break;
                    }
                }
                
                if (!jogador_encontrado) {
                    if (mapa[y][x] == 1) {
                        printf("* ");
                    } else {
                        printf(". ");
                    }
                }
            }

            printf("\n");
        }
    }

