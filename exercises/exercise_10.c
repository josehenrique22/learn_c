#include <stdio.h>
#include <stdbool.h>

void calcular_media(float notas[], int len); // não irei fazer verificação se o user digitou foi letra ou numero ja que não quero complicar.

int main()
{
    float notas[5];
    int len = sizeof(notas) / sizeof(notas[0]);

    printf("Digite 5 notas: \n");

    calcular_media(notas, len);

    return 0;
}

void calcular_media(float notas[], int len)
{
    float soma = 0.0; // sempre inicialize suas variáveis!
    
    for (int i = 0; i < len; i++)
    {
        float nota_temporaria;

        while (true) {
            printf("Digite a nota %d (0 a 10): ", i + 1);
            scanf("%f", &nota_temporaria);

            if (nota_temporaria >= 0 && nota_temporaria <= 10) {
                notas[i] = nota_temporaria;  // guarda o valor
                break;
            } else {
                printf("Nota inválida! Tente novamente.\n"); // volta para o começo se a nota não for valida.
            }
        }

        soma += notas[i]; // soma só depois que foi validado
    }

    float resultado = soma / len;

    printf("Média do aluno: %.2f\n", resultado);
}