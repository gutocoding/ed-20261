#include <stdio.h>

int calcpotencia(int base, int expoente)
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
    printf("Base 2, expoente 2: %d\n", calcpotencia(2,2));
    printf("Base 2, expoente 5: %d\n", calcpotencia(2,5));
    printf("Base 5, expoente 2: %d\n", calcpotencia(5,2));
    printf("Base 2, expoente 0: %d\n", calcpotencia(2,0));
    printf("Base 0, expoente 2: %d\n", calcpotencia(0,2));
    printf("Base -2, expoente 2: %d\n", calcpotencia(-2,2));
    return 0;
}
