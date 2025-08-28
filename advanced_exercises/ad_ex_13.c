#include <stdio.h>
#include <stdlib.h>

// FILA 
typedef struct {
    size_t size;
    size_t begin;
    size_t end;
    size_t count;
    void **data;
} queue;

int is_empty(queue *q) {
    return q->count == 0;
}

int is_full(queue *q) {
    return q->count == q->size;
}

queue *create_queue(size_t size) {
    queue *q = malloc(sizeof(queue));
    if (!q) return NULL;
    q->size = size;
    q->begin = 0;
    q->end = 0;
    q->count = 0;
    q->data = malloc(size * sizeof(void*));
    if (!q->data) { free(q); return NULL; }
    return q;
}

// Enqueue com redimensionamento dinâmico
int enqueue(queue *q, void *element) {
    // Redimensionar se cheio
    if (is_full(q)) {
        void **new_data = malloc(q->size * 2 * sizeof(void*));
        if (!new_data) return 0; // falha na alocação

        // Copia elementos na ordem correta
        for(size_t i = 0; i < q->count; i++) {
            new_data[i] = q->data[(q->begin + i) % q->size];
        }

        free(q->data);
        q->data = new_data;
        q->size *= 2;
        q->begin = 0;
        q->end = q->count;
    }

    // Inserir o elemento
    q->data[q->end] = element;
    q->end = (q->end + 1) % q->size;
    q->count++;
    return 1;
}

void *dequeue(queue *q) {
    if (is_empty(q)) return NULL;
    void *element = q->data[q->begin];
    q->begin = (q->begin + 1) % q->size;
    q->count--;
    return element;
}

// Teste
int main() {
    queue *q = create_queue(2); // começando pequeno para testar redimensionamento
    if (!q) { printf("Erro de memoria\n"); return 1; }

    int a = 10, b = 20, c = 30;
    char *msg = "ola mundo";
    char *msg_2 = "nova mensagem";
    float d = 2.2f;

    printf("Tamanho antes: %zu\n", q->size);
    enqueue(q, &a);
    enqueue(q, &b);
    printf("Tamanho depois de 2 elementos: %zu\n", q->size);
    enqueue(q, &c); // aqui vai crescer se a fila estiver cheia
    printf("Tamanho depois de adicionar o 3 elemento: %zu\n", q->size);
    enqueue(q, msg); // 3
    enqueue(q, msg_2);
    printf("Tamanho depois de adicionar o 4 elemento: %zu\n", q->size);
    enqueue(q, &d);

    // Salva antes da remoção
    int *x = (int*) dequeue(q);
    int *y = (int*) dequeue(q);
    int *z = (int*) dequeue(q);
    char *s = (char*) dequeue(q);
    char *s_2 = (char*) dequeue(q);
    float *zd = (float*) dequeue(q);

    printf("int1: %d\n", *x);
    printf("int2: %d\n", *y);
    printf("int3: %d\n", *z);
    printf("str1: %s\n", s);
    printf("str2: %s\n", s_2);
    printf("float: %.2f\n", *zd);

    free(q->data);
    free(q);
    return 0;
}
