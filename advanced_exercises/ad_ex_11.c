#include <stdio.h>
#include <stdlib.h>

char *read_file(const char *path) {
    FILE *file = fopen(path, "r");
    if (!file) {
        printf("Error ao abrir o arquivo: %s\n", path);
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *buffer = malloc(length + 1);
    if (!buffer) return NULL;

    fread(buffer, 1, length, file);
    buffer[length] = '\0';
    fclose(file);

    return buffer;
}

int main() {
    char *name = read_file("filename.txt");
    // printf("%s", name);

    return 0;
}