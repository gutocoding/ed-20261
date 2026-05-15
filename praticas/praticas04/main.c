#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 100

int main () 
{
    int vetor[TAMANHO];

    sortear(vetor, TAMANHO);
    printf("Vetor original:\n");
    imprimir(vetor, TAMANHO);
    clock_t inicio = clock();
    bubble_sort(vetor, TAMANHO);
    clock_t fim = clock();
    printf("Tempo de execucao: %f segundos\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);

    printf("\nVetor ordenado com Bubble Sort:\n");
    imprimir(vetor, TAMANHO);

 
    sortear(vetor, TAMANHO);
    printf("\nVetor original:\n");
    imprimir(vetor, TAMANHO);
    inicio = clock();
    selection_sort(vetor, TAMANHO);
    fim = clock();
    printf("Tempo de execucao: %f segundos\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);

    printf("\nVetor ordenado com Selection Sort:\n");
    imprimir(vetor, TAMANHO);


    sortear(vetor, TAMANHO);
    printf("\nVetor original:\n");
    imprimir(vetor, TAMANHO);
    inicio = clock();
    quick_sort(vetor, 0, TAMANHO - 1);
    fim = clock();
    printf("Tempo de execucao: %f segundos\n", ((double)(fim - inicio)) / CLOCKS_PER_SEC);
    printf("\nVetor ordenado com Quick Sort:\n");
    imprimir(vetor, TAMANHO);

    return 0;
}