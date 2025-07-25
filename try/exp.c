#include <stdio.h>
#include <string.h>

int main() {

    // -1 para se não for igual ou seja negativo
    // 0 se for igual ou seja true
    char string_1[] = "Ola";
    char string_2[] = "Pow";

    if (stricmp(string_1, string_2) < 0)  {
        printf("Hello\n");
    }

    printf("%d\n", stricmp(string_1, string_2));
}