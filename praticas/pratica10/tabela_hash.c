#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

typedef struct no_t
{
    int valor;
    struct no_t *proximo;
} No;

struct hash_t
{
    No **tabela;
    int tamanho;
};

static int calcular_hash(int valor, int tamanho)
{
    if (valor < 0)
    {
        valor = -valor;
    }
    return valor % tamanho;
}

TabelaHash* hash_criar(int tamanho)
{
    TabelaHash *h = (TabelaHash *)malloc(sizeof(TabelaHash));
    if (h == NULL)
    {
        return NULL;
    }
    
    h->tamanho = tamanho;
    h->tabela = (No **)malloc(tamanho * sizeof(No *));
    if (h->tabela == NULL)
    {
        free(h);
        return NULL;
    }

    for (int i = 0; i < tamanho; i++)
    {
        h->tabela[i] = NULL;
    }

    return h;
}

int hash_inserir(TabelaHash *h, int valor)
{
    if (h == NULL)
    {
        return 1;
    }

    int indice = calcular_hash(valor, h->tamanho);
    
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
    {
        return 1;
    }

    novo->valor = valor;
    novo->proximo = h->tabela[indice];
    h->tabela[indice] = novo;

    return 0;
}

int hash_buscar(TabelaHash *h, int valor)
{
    if (h == NULL)
    {
        return 0;
    }

    int indice = calcular_hash(valor, h->tamanho);
    No *aux = h->tabela[indice];

    while (aux != NULL)
    {
        if (aux->valor == valor)
        {
            return 1;
        }
        aux = aux->proximo;
    }

    return 0;
}

int hash_remover(TabelaHash *h, int valor)
{
    if (h == NULL)
    {
        return 1;
    }

    int indice = calcular_hash(valor, h->tamanho);
    No *atual = h->tabela[indice];
    No *anterior = NULL;

    while (atual != NULL)
    {
        if (atual->valor == valor)
        {
            if (anterior == NULL)
            {
                h->tabela[indice] = atual->proximo;
            }
            else
            {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return 0;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    return 1;
}

void hash_exibir(TabelaHash *h)
{
    if (h == NULL)
    {
        return;
    }

    for (int i = 0; i < h->tamanho; i++)
    {
        printf("[%i] -> ", i);
        No *aux = h->tabela[i];
        while (aux != NULL)
        {
            printf("%i -> ", aux->valor);
            aux = aux->proximo;
        }
        printf("NULL\n");
    }
}

int hash_esta_vazia(TabelaHash *h)
{
    if (h == NULL)
    {
        return -1;
    }

    for (int i = 0; i < h->tamanho; i++)
    {
        if (h->tabela[i] != NULL)
        {
            return 0;
        }
    }

    return 1;
}

int hash_destruir(TabelaHash *h)
{
    if (h == NULL)
    {
        return 1;
    }

    for (int i = 0; i < h->tamanho; i++)
    {
        No *aux = h->tabela[i];
        while (aux != NULL)
        {
            No *lixo = aux;
            aux = aux->proximo;
            free(lixo);
        }
    }

    free(h->tabela);
    free(h);

    return 0;
}