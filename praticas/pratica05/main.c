#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define TAMANHO 100

int main (void)
{
    int vetor[TAMANHO] = {72, 15, 89, 34, 67, 2, 98, 45, 23, 76, 
    11, 54, 90, 6, 31, 84, 27, 63, 49, 100,
    18, 57, 39, 70, 8, 95, 41, 22, 60, 13,
    88, 36, 74, 1, 52, 69, 17, 92, 28, 47,
    66, 5, 81, 33, 58, 20, 96, 44, 79, 12,
    61, 25, 83, 3, 68, 40, 99, 16, 55, 30,
    77, 14, 91, 7, 50, 37, 82, 21, 64, 9,
    73, 26, 87, 4, 59, 32, 94, 19, 48, 71,
    10, 53, 80, 35, 62, 24, 93, 29, 56, 38,
    65, 42, 97, 46, 78, 43, 85, 51, 75, 86};


    printf("Medindo o pior caso com linear search...\n");
    clock_t inicio = clock();
    int achou = linear_search(vetor, TAMANHO, 86);
    clock_t fim = clock();
    printf("Tempo medido apos pior caso com linear search: %.8f\n", (float)(fim - inicio)/CLOCKS_PER_SEC);

    printf("Medindo o melhor caso com linear search...\n");
    inicio = clock();
    achou = linear_search(vetor, TAMANHO, 72);
    fim = clock();
    printf("Tempo medido apos melhor caso com linear search: %.8f\n", (float)(fim - inicio)/CLOCKS_PER_SEC);
    
    printf("Medindo o tempo com quick select...\n");
    inicio = clock();
    achou = quick_select(vetor, 0, TAMANHO - 1, 85);
    fim = clock();
    printf("Tempo medido com quick select: %.8f\n", (float)(fim - inicio)/CLOCKS_PER_SEC);

    
    
    
}