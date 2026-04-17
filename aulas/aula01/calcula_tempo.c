#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t tempo_inicial = clock();

    long int soma = 10 + 20;

    clock_t temp_final = clock();
    double duracao = (double)(temp_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %f seg", duracao);

    tempo_inicial = clock();

    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
          soma = 10 + 20;
        }

    }

    temp_final = clock();
    duracao = (double)(temp_final - tempo_inicial) / CLOCKS_PER_SEC;
    printf("O tempo de execucao foi %f seg", duracao);

    return 0;
}