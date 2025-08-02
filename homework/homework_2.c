#include <stdio.h>

/*
    📙 Dever de Casa 2 – Reversão real de string com ponteiros
Objetivo: Consolidar o uso de ponteiros para manipular dados diretamente na memória e reforçar a ideia de troca de valores.

✍ Enunciado:
Crie um programa que:

Tenha uma função void inverter(char *str) que modifica a string original, invertendo os caracteres nela;

A função não pode usar índices ([]). Apenas ponteiros (*str, *(str + i), ou aritmética de ponteiros como p++, p--, etc.);

No main(), declare uma string qualquer e chame a função para inverter.
*/

int size(char *str);
int reverse(char *str);

int main() {

    char str[] = {"amor"};

    reverse(str);

    printf("String original reversa: %s\n", str);

    return 0;
}

int size(char *str) {
    int count = 0;

    while (*str != '\0') {
        count++;
        str++;
    }

    return count;
}

int reverse(char *str) {
    int end = size(str) - 1;
    int begin = 0;

    while (begin < end) {
        char temp_var = *(str + begin);
        *(str + begin) = *(str + end);
        *(str + end) = temp_var;

        begin++;
        end--;
    }

    return 0;
}