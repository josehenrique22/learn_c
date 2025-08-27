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

int enqueue(queue *q, void *element) {
    if (is_full(q)) return 0;
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

int main() {
    queue *q = create_queue(5);
    if (!q) { printf("Erro de memoria\n"); return 1; }

    int a = 10, b = 20;
    char *msg = "ola mundo";

    enqueue(q, &a);
    enqueue(q, &b);
    enqueue(q, msg);

    int *x = (int*) dequeue(q);
    int *y = (int*) dequeue(q);
    char *s = (char*) dequeue(q);

    printf("int1: %d\n", *x);
    printf("int2: %d\n", *y);
    printf("str: %s\n", s);

    free(q->data);
    free(q);
    return 0;
}