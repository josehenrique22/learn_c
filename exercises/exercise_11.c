#include <stdio.h>
#include <string.h>

int main() {
    char nome_1[20];
    char nome_2[20];

    printf("Digite seu nome: \n");
    scanf("%19s", nome_1);

    strcpy(nome_2, nome_1); //copia o nome_1 para nome_2
    // a função do strcpy(presumo que seja o resumo de string copy) é para copiar o value de uma variavel para outra
    // mas, não sei o porque ? talvez gerenciamento de memoria ? mas os strings não são pesados ? ou são ?
    // ou é uma maneira de gerenciar quando for um codigo mais robusto ?

    printf("Nome original: %s \n", nome_1);
    printf("Nome copiado: %s \n", nome_2);

    // presumo que strcmp seja para comparar String Compare
    // agora por que tem funções para isso ? sera por que string sejam ponteiros e são mais complicado de usar 
    // em vez de usar == precisa ser um pouco mais complicado, algo que eu não esteja familiarizado ?
    // algo em relação da linguagem da maquina ou como um computador funciona ?
    if (strcmp(nome_1, nome_2) == 0) {// aqui não deveria ser 1 ja que 1 é verdadeiro, entao porque apenas funciona com 0 ja que é falso ? um pouco confuso aqui
        printf("Você digitou o mesmo nome duas vezes! \n");
    }

    return 0;
}