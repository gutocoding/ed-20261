#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

typedef struct no_t
{
    int valor;
    struct no_t *esquerda;
    struct no_t *direita;
} No;

struct arvore_t
{
    No *raiz;
};

Arvore* arvore_criar()
{
    Arvore *a = (Arvore *)malloc(sizeof(Arvore));
    if (a != NULL)
    {
        a->raiz = NULL;
    }
    return a;
}

int arvore_esta_vazia(Arvore *a)
{
    if (a == NULL || a->raiz == NULL)
    {
        return 1;
    }
    return 0;
}

static No* inserir_no(No *atual, int valor)
{
    if (atual == NULL)
    {
        No *novo = (No *)malloc(sizeof(No));
        if (novo == NULL)
        {
            return NULL;
        }
        novo->valor = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        return novo;
    }

    if (valor < atual->valor)
    {
        atual->esquerda = inserir_no(atual->esquerda, valor);
    }
    else if (valor > atual->valor)
    {
        atual->direita = inserir_no(atual->direita, valor);
    }

    return atual;
}

int arvore_inserir(Arvore *a, int valor)
{
    if (a == NULL)
    {
        return 1;
    }
    a->raiz = inserir_no(a->raiz, valor);
    return 0;
}

static void exibir_pre_ordem(No *n)
{
    if (n != NULL)
    {
        printf("%i ", n->valor);
        exibir_pre_ordem(n->esquerda);
        exibir_pre_ordem(n->direita);
    }
}

void arvore_exibir_pre_ordem(Arvore *a)
{
    if (a != NULL)
    {
        exibir_pre_ordem(a->raiz);
        printf("\n");
    }
}

static void exibir_em_ordem(No *n)
{
    if (n != NULL)
    {
        exibir_em_ordem(n->esquerda);
        printf("%i ", n->valor);
        exibir_em_ordem(n->direita);
    }
}

void arvore_exibir_em_ordem(Arvore *a)
{
    if (a != NULL)
    {
        exibir_em_ordem(a->raiz);
        printf("\n");
    }
}

static void exibir_pos_ordem(No *n)
{
    if (n != NULL)
    {
        exibir_pos_ordem(n->esquerda);
        exibir_pos_ordem(n->direita);
        printf("%i ", n->valor);
    }
}

void arvore_exibir_pos_ordem(Arvore *a)
{
    if (a != NULL)
    {
        exibir_pos_ordem(a->raiz);
        printf("\n");
    }
}

static void destruir_nos(No *n)
{
    if (n != NULL)
    {
        destruir_nos(n->esquerda);
        destruir_nos(n->direita);
        free(n);
    }
}

int arvore_destruir(Arvore *a)
{
    if (a == NULL)
    {
        return 1;
    }
    destruir_nos(a->raiz);
    free(a);
    return 0;
}