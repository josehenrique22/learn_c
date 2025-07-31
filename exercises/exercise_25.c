#include <stdio.h>

int reverter(char *arr);
int tamanho(char *arr);

int main() { 

    char arr[] = {"roma"};

    reverter(arr);

    printf("String invertida: %s\n", arr);

    return 0;
}

int tamanho (char *arr) {
    int count = 0;

    while (*arr != '\0') {

        count++;
        arr++;
    }

    return count;
}

int reverter(char *arr) {
    int fim = tamanho(arr) - 1;
    int comeco = 0;

    while (comeco < fim) {
        char temp = *(arr + comeco);
        *(arr + comeco) = *(arr + fim);
        *(arr + fim) = temp;

        fim--;
        comeco++;
    }

    return 0;
}