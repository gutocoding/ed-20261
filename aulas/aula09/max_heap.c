#include <stdlib.h>
#include "max_heap.h"

MaxHeap* criar(int capacidade) {
    MaxHeap *heap = (MaxHeap*) malloc(sizeof(MaxHeap));
    if (heap == NULL) {
        return NULL; // Falha na alocação de memória
    }

    heap->dados = (int*) malloc(capacidade * sizeof(int));
    heap->tamanho = 0;
    heap->capacidade = capacidade;
    return heap;
}

void destruir(MaxHeap *raiz) {
    free(raiz->dados);
    free(raiz);
}

//algoritmo de flutuação
void up_heap(MaxHeap *raiz, int indice)
{
    int indice_pai = (indice - 1) / 2;
    while (indice > 0 && raiz->dados[indice] > raiz->dados[indice_pai]) {
        // Troca os valores
        int temp = raiz->dados[indice];
        raiz->dados[indice] = raiz->dados[indice_pai];
        raiz->dados[indice_pai] = temp;

        //sobe um nivel da heap
        indice = indice_pai;
        indice_pai = (indice - 1) / 2;
    }
}

void inserir(MaxHeap *raiz, int valor) {
    if (raiz->tamanho >= raiz->capacidade) {
        return; // Heap cheio, não é possível inserir
    }

    raiz->dados[raiz->tamanho] = valor;
    raiz->tamanho++;
    up_heap(raiz, raiz->tamanho - 1);

}

void down_heap(MaxHeap *raiz, int indice)
{
    int maior = indice;
    int indice_esquerdo = 2 * indice + 1;
    int indice_direito = 2 * indice + 2;

    if (indice_esquerdo < raiz->tamanho && raiz->dados[indice_esquerdo] > raiz->dados[maior]) {
        maior = indice_esquerdo;
    }

    if (indice_direito < raiz->tamanho && raiz->dados[indice_direito] > raiz->dados[maior]) {
        maior = indice_direito;
    }

    if (maior != indice) {
        // Troca os valores
        int temp = raiz->dados[indice];
        raiz->dados[indice] = raiz->dados[maior];
        raiz->dados[maior] = temp;

        // Desce um nivel da heap
        down_heap(raiz, maior);
    }
}

int remover(MaxHeap *raiz)
{
    if (raiz->tamanho == 0)
    {
        return -1; // Heap vazia, não é possível remover
    }

    int valor = raiz->dados[0];
    raiz->dados[0] = raiz->dados[raiz->tamanho - 1];
    raiz->tamanho--;

    down_heap(raiz, 0);
    return valor;
}