#include <stdio.h>

int lerVetor(int vSize, int valor, int *vet)
{
    if  (vet == NULL || vSize <= 0)
    {
        printf("Vetor invalido\n");
        return  -1;
    }
    for (int i = 0; i < vSize; i++)
    {
        if (valor == vet[i])
        {
            printf("%d esta no vetor\n", vet[i]);
            return  1;
        }
    }

    printf("%d nao esta no vetor\n", valor);
    return 0;
}



int main (void)
{
    int vetor[100] = {0};
    for (int i = 0; i < 100; i++)
    {
        vetor[i] = i + (3 * i);
        //printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    lerVetor(100, 30, vetor);
    lerVetor(100, 40, vetor);
    lerVetor(100, 50, vetor);
    lerVetor(100, 60, vetor);
    lerVetor(100, 396, vetor);
    lerVetor(0, 396, vetor);
    lerVetor(100, 48, NULL);

    printf("Complexidade: O(n).\n");
    printf("Melhor caso:  O(1). Pior caso: O(n) (neste caso, seria 100)\n");
    return 0;
}