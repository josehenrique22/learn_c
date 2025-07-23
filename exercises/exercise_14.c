#include <stdio.h>

int main()
{

    int notas[3][4]; // alunos // notas

    int length_alunos = sizeof(notas) / sizeof(notas[0]);
    int length_notas = sizeof(notas[0]) / sizeof(notas[0][0]);

    // preencher os dados
    for (int i = 0; i < length_alunos; i++)
    {
        for (int j = 0; j < length_notas; j++)
        {
            printf("Digite a nota do aluno %d na prova %d\n", i + 1, j + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    // Exibir notas
    for (int i = 0; i < length_alunos; i++) // linhas
    {   float soma = 0;
        float media = 0.0; 
        printf("Notas dos Alunos: %d\n", i + 1);
        for (int j = 0; j < length_notas; j++) { // colunas  
           soma += notas[i][j];
        }
        media = soma / length_notas;
        printf("Media do aluno %d: %2.f\n", i + 1, media);
        printf("\n");
    }

    return 0;
}