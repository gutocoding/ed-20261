<<<<<<< HEAD
#include <stdio.h>

int calcularpotencia(int base, int expoente)
{
    int temp = base;
    if (base <= 0 || expoente <= 0)
    {
        printf("Base ou expoente inválidos (use numeros inteiros positivos\n)");
        return 0;
    }
    for (int i = 1; i < expoente; i++)
    {
        temp = base * temp;
    }

    return temp;
}

int main()
{
    int base = 4;
    int expoente = 2;
    int resultado = calcularpotencia(base, expoente);
    printf("Resultado: %d\n", resultado);

    base = 2;
    expoente = 3;
    resultado = calcularpotencia(base, expoente);
    printf("Resultado: %d\n", resultado);

    base = 2;
    expoente = 5;
    resultado = calcularpotencia(base, expoente);
    printf("Resultado: %d\n", resultado);

    base = 10;
    expoente = 0;
    resultado = calcularpotencia(base, expoente);
    printf("Resultado: %d\n", resultado);

    base = -3;
    expoente = 2;
    resultado = calcularpotencia(base, expoente);
    printf("Resultado: %d\n", resultado);

    base = 2;
    expoente = -2;
    resultado = calcularpotencia(base, expoente);
    printf("Resultado: %d\n", resultado);
    return 0;
=======
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
>>>>>>> ee8d4fa4b81bd1eca8d07fde0ac8d872ba5af4ce
}