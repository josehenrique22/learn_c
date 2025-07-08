#include <stdio.h>

/*
        Pergunta dois números ao usuário.

        Pergunta qual operação deseja fazer: +, -, * ou /.

        Mostra o resultado da operação.
    */

int main()
{

    char op;
    float n1, n2;
    float result;

    printf("Digite um numero: \n");
    scanf("%f", &n1);

    printf("Digite outro numero: \n");
    scanf("%f", &n2);

    printf("Digite o operador: (+, -, *, /): \n");
    scanf(" %c", &op);

    switch (op)
    {

    case '+':
        result = n1 + n2;
        break;

    case '-':
        result = n1 - n2;
        break;

    case '*':
        result = n1 * n2;
        break;

    case '/':
        if (n2 != 0)
        {
            result = n1 / n2;
        } else{
            printf("Não foi possivel dividir \n");
            return 1;
        }

        break;
    }
    printf("Resultado da operacao: %.2f", result);

    return 0;
}