#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[])
{
    if (argc != 2)
    {
        printf("Uso: ./executavel.exe <quantidade de numeros a ser inserido\n", argv[0]);
        return 1;
    }
    int n = atoi(argv[1]);
    if (n > 100)
    {
        printf("Maximo de numeros permitdo e 100\n");
        return 1;
    }

    float soma = 0;
    int num = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("Insira o %d numero: ",  i);
        scanf("%d", &num);
        soma = soma + num;
    }

    printf("Media e: %.2f", (float)soma/n);

    return 0;



}