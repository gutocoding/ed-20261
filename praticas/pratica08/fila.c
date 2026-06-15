#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

typedef struct no_t{
    int valor;
    struct no_t *proximo;
}No;

struct fila_t
{
    No *inicio;
    No *fim;
};

Fila *fila_criar()
{
    Fila *novaF = (Fila *)malloc(sizeof(Fila));
    if (novaF == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return NULL;
    }

    novaF->inicio = NULL;
    novaF->fim = NULL;

    return novaF;
}

int fila_enfileirar(Fila *f, int valor)
{
    if (f == NULL)
    {
        printf("Fila nao encontrada ou nao existe.\n");
        return 1;
    }

    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    novo->valor = valor;
    novo->proximo = NULL;

    if (f->inicio == NULL)
    {
        f->inicio = novo;
        f->fim = novo;
    }
    else
    {
        f->fim->proximo = novo;
        f->fim = novo;
    }
    return 0;
}

int fila_desenfileirar(Fila *f)
{
    if (f == NULL || f->inicio == NULL)
    {
        printf("Fila invalida ou nao existe\n");
        return 1;
    }
    No *aux = f->inicio;
    f->inicio = f->inicio->proximo;
    if (f->inicio == NULL)
    {
        f->fim = NULL; 
    }
    free(aux);

    return 0;
}

int fila_inicio(Fila *f)
{
    if (f == NULL)
    {
        printf("Fila nao encontrada ou nao existe.\n");
        return 1;
    }

    if (f->inicio == NULL)
    {
        printf("O primeiro elemento eh nulo.\n");
    }
    else{
        printf("O primeiro elemento eh %i\n", f->inicio->valor);
    }

    return 0;
}

int fila_esta_vazia(Fila *f)
{
    if (f == NULL)
    {
        printf("Fila nao encontrada ou nao existe.\n");
        return -1;
    }

    if (f->inicio == NULL)
    {
        printf("Fila esta vazia.\n");
        return 1;
    }
    else
    {
        printf("Fila NAO esta vazia.\n");
        return 0;
    }
}

void exibir_fila(Fila *f)
{
    if (f == NULL)
    {
        printf("Fila nao encontrada ou nao existe.\n");
        return;
    }
    No *aux = f->inicio;
    printf("Inicio ");
    while (aux != NULL)
    {
        printf("%i -> ", aux->valor);
        aux = aux->proximo;
    }
    printf("Fim\n");
    return;
}

int destruir_fila(Fila *f)
{
    if (f == NULL)
    {
        printf("Fila nao encontrada ou nao existe.\n");
        return 1;
    }
    No *aux = f->inicio;
    while(aux != NULL)
    {
        No *aux1 = aux;
        aux = aux->proximo;
        free(aux1);
    }
    free(f);
    printf("Fila destruida com sucesso.\n");
    return 0;
}


