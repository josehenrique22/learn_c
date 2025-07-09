    #include <stdio.h>
    #include <stdbool.h>

    /*
        validação de entrada

    laços com condição controlada

    uso de scanf com verificação

    conceitos de função básica (prévia para modularização futura)

    🧠 Exercício: Validador de Notas
    Objetivo:
    Criar um programa que peça para o usuário digitar uma nota de 0 a 10.
    Se o valor digitado for inválido, o programa deve informar e pedir novamente até que o valor esteja dentro do intervalo.

    ✨ Regras:
    O programa deve pedir ao usuário para digitar uma nota.

    Se a nota estiver fora do intervalo de 0 a 10, o programa deve:

    exibir a mensagem "Nota inválida. Tente novamente."

    voltar a pedir a nota.

    Quando o usuário digitar uma nota válida, o programa deve exibir:
    "Nota válida: X" onde X é a nota.

    🎯 Dica para iniciar:
    Você pode usar um laço while com uma variável valida ou uma estrutura do...while.
    Lembre que o scanf retorna o número de itens lidos com sucesso — você pode usar isso para validar se o usuário digitou um número mesmo.
    */

    // oque preciso, Guardar a nota, um laço de repetição, validar se a nota esta no scopo defino se não estiver repete tudo novamente.
    // registrar o input do usuario, mostrar mensagens ser claro e descritivo para não acontecer confução por parte do usuario.

    // nesse exe esqueceu de validar o input(scanf) se é numero ou não
    int main()
    {
        float number; // guarda o numero
        bool invalid = true; // se for false ele para o loop (guarda se esta valido ou não)
        do {
            printf("Digite uma nota valida de 0 a 10: \n");
            int sucesso = scanf("%f", &number); // guarda o input do usuario

            if (sucesso != 1) {
                printf("Entrada invalida. voce não digitou um numero \n");

                int clean_buffer;

                while ((clean_buffer = getchar()) != '\n' && clean_buffer != EOF);
                continue;
            }

            if (number >= 0 && number <= 10) { // confição // Usar and e nao or nesses casos
                printf("Nota valida: %.2f\n", number);
                invalid = false;
            } else {

                printf("Digite a nota novamente!");
            }


        } while (invalid);

        return 0;
    }