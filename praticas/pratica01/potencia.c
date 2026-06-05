#include <stdio.h>

int calcularpotencia(int base, int expoente)
{
    if (base < 1 || expoente < 1)
    {
        printf("Base e expoente precisam ser numeros inteiros positivos!\n");
        return 0;
    }
    int temp = base;

    for (int i = 1; i < expoente; i++)
    {
        temp = base * temp;
    }

    return temp;
}

int main()
{
    printf("Base 2, expoente 2: %d\n", calcularpotencia(2,2));
    printf("Base 2, expoente 5: %d\n", calcularpotencia(2,5));
    printf("Base 5, expoente 2: %d\n", calcularpotencia(5,2));
    printf("Base 2, expoente 0: %d\n", calcularpotencia(2,0));
    printf("Base 0, expoente 2: %d\n", calcularpotencia(0,2));
    printf("Base -2, expoente 2: %d\n", calcularpotencia(-2,2));
    return 0;
}