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
}