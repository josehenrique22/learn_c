#include <stdio.h>
#include <stdbool.h>

// Calc loop

/*
    Objetivo:
Repetir operações matemáticas enquanto o usuário quiser continuar.

Conceitos envolvidos:
while ou do...while

switch

controle de fluxo com char

entrada segura de dados

Regras:
O programa deve pedir dois números.

    Deve perguntar o operador (+, -, *, /).

    Após mostrar o resultado, perguntar se o usuário quer fazer outra operação (s ou n).

    Se o usuário digitar s, repete tudo. Se digitar n, termina o programa com uma mensagem de despedida.
*/

int main()
{
    float number_1, number_2, result;
    char op;
    char rep_quest;
    bool cont_calc = true;

    while (cont_calc)
    {

        printf("Digite um numero: \n");
        scanf("%f", &number_1);

        printf("Digite um outro numero: \n");
        scanf("%f", &number_2);

        printf("Digite um operador: \n");
        scanf(" %c", &op);

        switch (op)
        {

        case '+':
            result = number_1 + number_2;
            break;

        case '-':
            result = number_1 - number_2;
            break;

        case '*':
            result = number_1 * number_2;
            break;

        case '/':
            if (number_1 != 0) // Indicado colocar o numero divisor number_2
            {
                result = number_1 / number_2;
            }
            else
            {
                // Criar uma bool para ver se pode executar no caso if (operação_valida) etc.. 
                printf("Nao é possivel fazer essa operacao! \n"); // Ser mais claro por que não pode dividir, no caso colocar que não pode dividir por ZERO
            }
            break;
        }

        printf("Resultado da operacao: %.2f \n", result);

        printf("Deseja continuar ? \n");
        scanf(" %c", &rep_quest);

        if (rep_quest == 'n') {
            printf("Operacao encerrada! \n");
            cont_calc = false;
        }
    }

    return 0;
}