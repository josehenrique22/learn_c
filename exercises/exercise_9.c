#include <stdio.h>

void exibir_mensagem(char nome[]);
// void debug_mensagem(char nome_debug[]); // separando a logica do debug
// eu iria validar, mas vi que tem conceitos que eu não sei, pelo menos nos exemplos que eu vi como ponteiros e strings na biblioteca str'algumacoisa' então acho melhor deixa de fora

int main() {
    char nome[12];
    printf("Digite seu nome. no maximo 12 characteres: \n");
    scanf("%s", &nome); // Não precisa do &, ja que string são ponteiros, mas deixarei aqui para lembrar do erro
    // pode usar a quantidade de elementos que deseja digitar para não causar buffer overflow como %11s
    
    exibir_mensagem(nome);

    return 0;
}

void exibir_mensagem(char nome[]) {
    printf("Ola, %s, voce escreveu sua primeira funcao \n", nome);
}