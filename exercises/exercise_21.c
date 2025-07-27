#include <stdio.h>

void mult_array(int arr[], int length) {

    
    for (int i = 0; i < length; i++) {
        *(arr + i) = *(arr + i) * 2;
    }

    for (int i = 0; i < length; i++ ) {
        
        printf("arr modificado: %d\n", *(arr + i));

    }
}

int main () {
    int arr [5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    mult_array(arr, length);

    return 0;
}