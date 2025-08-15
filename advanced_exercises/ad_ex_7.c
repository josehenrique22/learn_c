#include <stdio.h>
#include <stdlib.h>
// Melloc memory allocation -> alocação dinamica de  blocos longos de memoria com um tamanho especifico

int main() {

    int *ptr;
    int size;

    // size of the array
    printf("Enter size of elements: ");
    scanf("%d", &size);

    // memory allocates dynamically using malloc()
    ptr = malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated. \n");
    } else {
        printf("Memory allocated with success. \n");

        for (int j = 0; j < size; j++) {
            ptr[j] = j + 1;
        }

        printf("The elements of the array are: ");
        for (int k = 0; k < size; k++) {
            printf("%d", ptr[k]);
        }
    }

    return 0;
}
