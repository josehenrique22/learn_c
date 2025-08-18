#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argvs) {

    FILE *fptr = fopen("filename.txt", "r");

    if (fptr == NULL) {
        printf("File not Opened\n");
        return 1;
    } else {
        printf("File readed\n");
    }

    fclose(fptr);

    return 0;
}