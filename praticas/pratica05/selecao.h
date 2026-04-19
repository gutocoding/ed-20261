#ifndef SELECAO_H
#define SELECAO_H

int linear_search(int vetor[], int tamanho, int alvo);
int quick_select(int vetor[], int inicio, int fim, int k);
void troca(int *a, int *b);
int particionar(int arr[], int inicio, int fim);

#endif