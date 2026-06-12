#include <stdio.h>
#include <time.h>

void lacosAninhados(int matriz[10][10])
{
    clock_t inicio = clock();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = 0;
        }
    }
    clock_t fim = clock();
    double tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo Gasto na operacao: %.20f segundos\n", tempo_gasto);
}

void lacoUnico(int matriz[10][10])
{
    int i = 0;
    int j = 0;
    clock_t inicio = clock();
    for (int k = 0; k < 100; k++)
    {
        i = k / 10;
        j = k % 10;
        matriz[i][j] = 1;

    }
    clock_t fim = clock();
    double tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo Gasto na operacao: %.20f segundos\n", tempo_gasto);
}

int main (void)
{
    int xadrez[10][10];

    printf("Percorrendo a matriz com lacos aninhados...\n");
    lacosAninhados(xadrez);
    printf("Complexidade: O(n^2).\n");

    printf("Percorrendo a matriz com laco unico...\n");
    lacoUnico(xadrez);
    printf("Complexidade: O(n^2) (Visita as mesmas casas que laços aninhados).\n");
}