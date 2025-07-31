#include <stdio.h>

/*
📘 Dever de Casa 1 – Introdução guiada: inspeção e impressão reversa
Objetivo: Refletir sobre como strings funcionam em C, como usar ponteiros para percorrê-las de trás pra frente, sem modificar a string original.

✍ Enunciado:
Crie um programa que:

Leia uma string (pode definir manualmente no código, como char str[] = "roma";);

Imprima essa string de trás para frente, usando apenas ponteiros e sem criar uma cópia nem inverter de fato a string.

Não pode usar array com índices (ou seja, sem str[i]). Use apenas *(str + i) ou char *p = str + i e similares.

*/


int size(char *arr);
void reverse(char *arr);


int main() {

    char arr[] = {"roma"};
    reverse(arr);
    printf("String original: %s\n", arr);
    return 0;
}

int size (char *arr) {// o fim do array '\0 ele não conta como elemento.
    int count = 0;
    while (*arr != '\0') {
        count++;
        arr++;
    }

    return count; // retorna o contador já que é o tamanho do array.
}

void reverse(char *arr) {
    
    int fim = size(arr) - 1; // ultimo charactere.
    int comeco = 0;
    for (int i = fim; i >= comeco; i--) {
        printf("String invertida: %c\n", *(arr + i));

    }
}
