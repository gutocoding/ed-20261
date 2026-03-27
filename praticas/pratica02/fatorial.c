#include <stdio.h>

int fatorialeRep(int num)
{
    if (num < 1)
    {
        printf("Apenas numeros positivos permitidos. \n");
    }
    int temp = 1;
    for (int i = num; i > 1; i--)
    {
        temp = temp * i;
    }
    return temp;
}

int fatorialRec(int num)
{
    if (num < 1)
    {
        printf("Apenas numeros positivos permitidos. \n");
    }
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return fatorialRec(num - 1) * num;
    }
}

int main (void)
{
    int numero = 3;
    int resultado = fatorialRec(numero);
    printf("Fatorial de 3: %d\n", resultado);

    numero = 5;
    resultado = fatorialRec(numero);
    printf("Fatorial de 5: %d\n", resultado);

    numero = 6;
    resultado = fatorialeRep(numero);
    printf("Fatorial de 6: %d\n", resultado);

    numero = 0;
    resultado = fatorialeRep(numero);
    printf("Fatorial de 0: %d\n", resultado);

    printf("Complexidade de tempo sequencial: O(n)\n");
    printf("Complexidade de espaco sequencial: O(1)\n");
    printf("Complexidade de tempo recursivo: O(n)\n");
    printf("Complexidade de espaco recursivo: O(n)\n");



}