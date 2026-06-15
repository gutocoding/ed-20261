#ifndef FILA_H
#define FILA_H

typedef struct fila_t Fila;

Fila *fila_criar();
int fila_enfileirar(Fila *f, int valor);
int fila_desenfileirar(Fila *f);
int fila_inicio(Fila *f);
int fila_esta_vazia(Fila *f);
void exibir_fila(Fila *f);
int destruir_fila(Fila *f);

#endif