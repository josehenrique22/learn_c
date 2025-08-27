#include <stdio.h>
#include <stdlib.h>  // malloc, free

// Definição da estrutura de fila (FIFO)
typedef struct {
    size_t size;   // capacidade do array
    size_t begin;  // índice do próximo a sair
    size_t end;    // índice do próximo a entrar
    void **data;   // array de ponteiros genéricos
} queue;

// Função para criar fila
queue *create_queue(size_t size) {
    // Warning: Sempre alocar pelo menos 1 no size
    queue *q = malloc(sizeof(queue));
    q->size = size;
    q->begin = 0;
    q->end = 0;
    q->data = malloc(size * sizeof(void*));
    return q;
}

// Enqueue: insere um elemento
void enqueue(queue *q, void *element) {
    q->data[q->end] = element;
    q->end = (q->end + 1) % q->size;
}

// Dequeue: remove e retorna elemento
void *dequeue(queue *q) {
    void *element = q->data[q->begin];
    q->begin = (q->begin + 1) % q->size;
    return element;
}

// Teste
int main() {
    queue *q = create_queue(5);

    if (q == NULL) {
        printf("Error in the memory(Queue)");
        return 1;
    }

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
