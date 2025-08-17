#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    printf("Enter limit of the text: \n");
    scanf("%d", &size);
    char str[size];
    printf("Enter some text: \n");
    scanf(" ");
    fgets(str, size, stdin);
    printf("Inputted text is: %s\n", str);
    str[strcspn(str, "\n")] = '\0';
    return 0;
}