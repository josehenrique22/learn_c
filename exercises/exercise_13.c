#include <stdio.h>
#include <string.h>


/* 
    🧠 Mini-desafio: Alunos & Busca de Nome

    🎯 Objetivo:

    Criar um programa em C que:

    Peça para o usuário digitar nomes de 5 alunos.

    Após todos os nomes serem digitados, pergunte por um nome para buscar.

    O programa deve verificar se o nome existe na lista:

    Se encontrar, exibir: "Nome encontrado na posição X".

    Se não encontrar, exibir: "Nome não encontrado."

    📌 Regras:
    Use char alunos[5][20].

    Use um for para ler os nomes.

    Use strcmp para comparar o nome buscado com os nomes do array.

    A posição deve começar de 1 (ou seja, primeira posição = 1).

    ✍️ Dicas:
    Use scanf("%19s", alunos[i]) para ler os nomes.

    Lembre-se de que strcmp retorna 0 quando as strings são iguais.

    Para controlar se achou ou não o nome, pode usar uma variável de flag.
*/

int main() {
    char nomes[5][20];
    char buscar_nome[20];

    printf("Digite o nomes na lista (5 vezes): \n");

    for (int i = 0; i < 5; i++) {
        scanf("%19s", nomes[i]);// impedir buffer overflow
    }

    printf("qual nome deseja buscar ? \n");

    scanf("%19s", buscar_nome);
    for (int i = 0; i < 5; i++) {

        if (strcmp(nomes[i], buscar_nome) == 0) {
            printf("Nome encontrado na posição: %d", i + 1); // como encontro a posição que esta no array que com o mesmo nome comparado
            break;
        }
    }
    return 0;
}