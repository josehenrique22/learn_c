#include <stdio.h>

/*
    Mini Exercício 1 — Acessando um array
    🎯 Objetivo:
    Declarar um array com 5 números já definidos e imprimir cada um deles usando um laço for.

    ✍️ O que você deve fazer:
    Declare um array float com 5 valores já preenchidos. Exemplo: 4.5, 7.0, 6.3, 8.2, 5.0.

    Use um laço for para imprimir cada valor, um por linha.

    Use printf com duas casas decimais.

    🧠 Conceitos que você irá praticar:
    Declaração de array com valores fixos

    Laço for com controle de índice

    Acesso a elementos do array com array[i]

    Impressão formatada com %.2f

    Nota 1: 4.50
    Nota 2: 7.00
    Nota 3: 6.30
    Nota 4: 8.20
    Nota 5: 5.00

*/

int main()
{

    float num_arr[9];
    int rep_grades;
    float soma = 0;
    float result = 0;
    float sum_1 = 0;
    float sum_2 = 0;
    float sum_3 = 0;
    int division = 3;
    
    printf("Digite o numero de notas: \n");
    scanf("%d", &rep_grades);

    for (int i = 0; i < rep_grades; i++)
    {
        printf("notas %.2d: \n", i + 1);
        scanf("%f", &num_arr[i]);

        soma += num_arr[i];
        if (i < 2)
        {
            sum_1 += soma / division;
            printf("Media 1: %.2f\n", sum_1);
            soma = 0;
        }
        else if (i < 5)
        {
            sum_2 += soma;
            printf("Media 2: %.2f\n", sum_2);
            soma = 0;
        }
        else if (i < 8)
        {
            sum_3 += soma;
            printf("Media 3: %.2f\n", sum_3);
            soma = 0;
        }

       
    }

    result = (sum_1 + sum_2 + sum_3) / division;

    printf("Media do ano: %.2f", result); // da para melhorar, mas por agora isso é o suficiente para meu nivel! 
}