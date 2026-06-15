#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

typedef struct no_t{
    int valor;
    struct no_t *proximo;
}No;

struct pilha_t {
   No *topo;
};

Pilha *pilha_criar()
{
    Pilha *nova = (Pilha *)malloc(sizeof(Pilha));
    if (nova == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return NULL;
    }

    nova->topo = NULL;

    return nova;
}

int pilha_empilhar(Pilha *p, int valor)
{
    if (p == NULL)
    {
        printf("Pilha nao encontrada ou nao existe.\n");
        return 1;
    }

    No *novo_no = (No *)malloc(sizeof(No));
    if (novo_no == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    novo_no->valor = valor;

    novo_no->proximo = p->topo;
    p->topo = novo_no;

    return 0;
}

int pilha_desempilhar(Pilha *p)
{
    if (p == NULL)
    {
        printf("Pilha nao encontrada ou nao existe.\n");
        return 1;
    }
    if (p->topo != NULL)
    {    
        No *aux = p->topo;
        p->topo = p->topo->proximo;
        free(aux);
    }
    else
    {
        printf("A pilha ja esta vazia.\n");
        return 1;
    }
    return 0;
}

int pilha_topo(Pilha *p)
{
    if (p == NULL)
    {
        printf("Pilha nao encontrada ou nao existe.\n");
        return 1;
    }
    if (p->topo == NULL)
    {
        printf("Pilha esta vazia.\n");
        return 1;
    }
    
    printf("O valor do topo e %i\n", p->topo->valor);
    return 0;
}

int pilha_esta_vazia(Pilha *p)
{
    if (p == NULL)
    {
        printf("Pilha nao encontrada ou nao existe.\n");
        return -1;
    }
    if (p->topo == NULL)
    {
        printf("Pilha esta vazia.\n");
        return 1;
    }
    else
    {
        printf("Pilha contem elemento(s).\n");
        return 0;
    }
}

void pilha_exibir(Pilha *p)
{
    if (p == NULL)
    {
        printf("Pilha nao encontrada ou nao existe.\n");
        return;
    }
    if (pilha_esta_vazia(p))
    {
        return;
    }
    No *aux = p->topo;
    while (aux != NULL)
    {
        printf("%i -> ", aux->valor);
        aux = aux->proximo;
    }
    printf("NULL\n");
    return;
}

int pilha_destruir(Pilha *p)
{
    if (p == NULL)
    {
        printf("Pilha nao encontrada ou nao existe.\n");
        return 1;
    }

    while(!pilha_esta_vazia(p))
    {
        pilha_desempilhar(p);
    }

    free(p);
    printf("Pilha destruida com sucesso.\n");
    return 0;
}