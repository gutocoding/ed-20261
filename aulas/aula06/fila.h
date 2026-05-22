#ifndef FILA_H
#define FILA_H

typedef struct no {
    int dados;
    struct no *proximo;
} No;

typedef struct {
    No *primeiro;
    No *ultimo;
    int quantidade;
}Fila;

Fila *criar();
void destruir(Fila *fila);
void enfileirar(Fila *fila, int valor); //enqueue
void desenfileirar(Fila *fila); //dequeue
int fila_vazia(Fila *fila);

#endif