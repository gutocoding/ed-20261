#include <stdio.h>
#include "max_heap.h"

void imprimir(MaxHeap *raiz) {
    printf("Heap: ");
    int indice = 0;
    while (indice < raiz->tamanho) {
        printf("%d ", raiz->dados[indice]);
        indice++;
    }
    printf("\n");
}

int main()
{
    MaxHeap *heap = criar(100);
    inserir(heap, 20);
    imprimir(heap);

    inserir(heap, 40);
    imprimir(heap);

    inserir(heap, 18);
    imprimir(heap);

    inserir(heap, 30);
    imprimir(heap);
    
    inserir(heap, 60);
    imprimir(heap);

    while (heap->tamanho != 0)
    {
        int valor = remover(heap);
        imprimir(heap);
    }
    destruir(heap);
    return 0;
}