#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

void bubble_sort(int v[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++)
        {
          if (v[j] > v[j + 1])
            {
              int aux = v[j + 1];
              v[j + 1] = v[j];
              v[j] = aux;
            }
        }
    }
}

void selection_sort(int v[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            if (v[j] < v[min])
            {
                min = j;
            }
        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}

void quick_sort(int v[], int inicio, int fim)
{
    if (inicio >= fim)
    {
        return;
    }

    int pivo = v[inicio];
    int i = inicio + 1;
    int f = fim;

    while (i <= f)
    {
        if (v[i] <= pivo)
        {
            i++;
        }
        else if (pivo < v[f])
        {
            f--;
        }
        else
        {
            int aux = v[i];
            v[i] = v[f];
            v[f] = aux;
            i++;
            f--;
        }
    }

    v[inicio] = v[f];
    v[f] = pivo;

    quick_sort(v, inicio, f - 1);
    quick_sort(v, f + 1, fim);
}

void sortear(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        v[i] = rand() % tamanho;
    }
}

void imprimir(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}
