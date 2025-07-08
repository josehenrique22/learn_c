#include <stdio.h>

// Exercicio: Escrever um programa que pergunta o nome do usuario e idade, armazena em variaveis e imprime o resultado
// Imprimir uma mensagem personalizada: Olá, [nome], você tem [idade] anos
int main() {

    // Precisar de Variaveis para guarda os dados
    char name[20];
    int age;

    // Ler os dados
    printf("Digite seu nome: \n");
    scanf("%s", name);

    printf("Digite sua idade: \n");
    scanf("%d", &age);

    printf("Ola, %s, Voce tem %d anos", name, age);

    return 0;
}