#include <stdio.h>
#include <stdbool.h>

// definir função com nome explicativo. em C precisa definir em cima, ja que o programa ler de cima para baixo(eu acho)
// Ja que esta pedindo um return de função, presumo que a função seja um variavel, no caso não seja um void
// Objetivo:
// Transformar sua calculadora anterior em uma versão que usa funções.
// presumo que queira que repita a questão.
float calcular(float n1, float n2, char op);

int main()
{
    float n1, n2;
    char op;

    printf("Digite o primeiro numero: \n");
    float n1_input = scanf("%f", &n1);

    printf("Digite o segundo numero: \n");
    float n2_input = scanf("%f", &n2);
    
    printf("Digite o operador: \n");
    char op_input = scanf(" %c", &op);

    float exibir_calc = calcular(n1, n2, op);

    printf("resultado da operacao: %.2f", exibir_calc);
    return 0;
}

float calcular(float n1, float n2, char op)
{
    switch (op)
    {
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    case '/':
        if (n2 != 0)
        {
            return n1 / n2;
        }
        else
        {
            printf("não foi possivel executa essa operação, o divisor de numero é 0 \n");
            return 0.0;
        }

    default:
        printf("Operador invalido! \n");
        return 0.0;
    }
}