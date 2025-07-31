#include <stdio.h>

// Criar uma função que compara duas strings caractere por caractere, como strcmp, mas feita por você.

int comparar(char *s1, char *s2);

int main() {

    char a[] = {"abc"};
    char b[]= {"bc"};

    int result = comparar(a, b);

    printf("%d", result);

    return 0;
}

int comparar(char *s1, char *s2) {

    while (*s1 != '\0' && *s2 != '\0') {
    if (*s1 != *s2) {
        return 0; // diferentes
    }
    s1++;
    s2++;
}
    return *s1 == '\0' && *s2 == '\0'; // 1 se iguais, 0 se uma acabou antes

}
