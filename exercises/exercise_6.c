#include <stdio.h>
#include <stdbool.h>
/*
    Peça ao usuário quantas notas ele quer digitar.

    Guarde todas as notas em um array.

    Some todas as notas.

    Mostre a média final.

    Conceitos que você vai aplicar:

    Declaração de arrays

    Uso de for para percorrer arrays

    Armazenamento de dados do usuário

    Soma e cálculo de média

    Orientações do tutor:

    Comece declarando um int total_notas.

    Use scanf para ler quantas notas o usuário quer digitar.

    Crie um array float notas[100], por exemplo (limitado por enquanto).

    Use um for para pedir cada nota e guardar no array.

    No mesmo laço (ou depois), vá somando tudo.

    Calcule a média (soma / total_notas) e exiba com 2 casas decimais.
*/

// falhei no execicio... não conseguir responder por mim mesmo.
int main()
{
    int total_notas;
    float notas[100];
    float soma = 0;

    printf("Quantas notas deseja digitar? ");
    scanf("%d", &total_notas);

    for (int i = 0; i < total_notas; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / total_notas;
    printf("Média final: %.2f\n", media);

    return 0;
}