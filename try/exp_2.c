#include <stdio.h>
#include <string.h>

int main() {
    // pegando character
    char str[10] = "ABCDe";
    char str_2[10];

    strcpy(str_2, str);

    if (strcmp(str, str_2) == 0) {
        printf("sao iguais\n");
        int ver = strcmp(str, str_2);
        printf("%d\n", ver);
    } else {
        printf("Valores sao diferentes\n");
    }
}