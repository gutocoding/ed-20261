#include <stdio.h>
#include "selecao.h"

int linear_search(int vetor[], int tamanho, int alvo)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == alvo)
        {
            return i;
        }
    }

    return -1;
}

void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}


int particionar(int arr[], int inicio, int fim)
{
    int pivo = arr[fim];
    int i = inicio;

    for (int j = inicio; j < fim; j++)
    {
        if (arr[j] <= pivo)
        {
            troca(&arr[j], &arr[i]);
            i++;
        }
    }

    troca(&arr[fim], &arr[i]);
    return i;
    
}

int quick_select(int vetor[], int inicio, int fim, int k)
{
    if (inicio <= fim)
    {
        int pivo = particionar(vetor, inicio, fim);

        if (pivo == k)
        {
            return vetor[pivo];
        }
        else if (k < pivo)
        {
            return quick_select(vetor, inicio, pivo - 1, k);
        }
        else
        {
            return quick_select(vetor, inicio, pivo + 1, k);
        }
    }

    return -1;
}