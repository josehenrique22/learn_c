#include <stdio.h>

/*
    Mini Exercício: Imprimindo só números pares do array
    Objetivo:
    Dado um array de inteiros com 10 posições, peça para o usuário preencher todos os valores. Em seguida, imprima apenas os números pares.

    Conceitos que você vai praticar:
    Leitura de números com scanf em array

    Uso de for com if

    Condição com numero % 2 == 0 para verificar se é par

    Separar lógica de entrada e lógica de saída

    🎯 Instruções:
    Declare um array int numeros[10];

    Use um for para pedir que o usuário digite 10 valores.

    Depois, use outro for para percorrer o array e imprimir apenas os pares.
*/

int main()
{

    int numeros[10];
    int length_arr = sizeof(numeros) / sizeof(numeros[0]); // Divisão de quantidades por unidades(conceito matematico)
    // n = número de elementos : T = tamanho total u = tamanho de um elemento

    int success;
    printf("Digite uma sequencia de 10 numeros para checar se são par ou impar: \n"); // tem que esta fora do loop ou ira repetir 10 vezes

    for (int i = 0; i < length_arr; i++)
    {
        success = scanf("%d", &numeros[i]);

        if (success != 1)
        { // prevenir bugs
            printf("Entrada invalida! apenas numeros! \n");

            int clear_buffer;

            while ((clear_buffer = getchar()) != '\n' && clear_buffer != EOF); // comum usar while para limpar a verificação, não if, mas boa pratica em verificar algo assim!
            continue;
        }

        scanf("%d", &numeros[i]);                          // não é preciso repetir! ja tem o success
        printf("Elementos: %d: %.d\n", i + 1, numeros[i]); // Debug
    } // CERTO! (esta funcionando!)

    // Exibir numeros pares!  numeros precisão ser inteiros!
    for (int j = 0; j < length_arr; j++)
    {

        if (success != 1)
            break; // prevenir bugs

        if ((int)numeros[j] % 2 == 0)
        {
            printf("Numeros Par %d: %d\n", j + 1, numeros[j]);
        }
        else
        {
            printf("Numeros Impar: %d: %d\n", j + 1, numeros[j]);
        }
    }

    printf("Programa concluido!");

    return 0;
}