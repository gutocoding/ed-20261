#include <stdio.h>

int calcular_notas(int valor)
{
    int notas200, notas100, notas50, notas20, notas10, notas5, notas2;
    int total = 0;
    int resto = 0;
    int temp = valor;

    if (valor > 1000)
    {
        printf("Valor máximo excedido (1000)\n;");
        return 0;
    }

    while (temp > 0)
    {
        if (temp >= 200)
        {
            temp = temp - 200;
            notas200++;
        }
        else if (temp >= 100)
        {
            temp -= 100;
            notas100++;
        }
        else if (temp >= 50)
        {
            temp -= 50;
            notas50++;
        }
        else if (temp >= 20)
        {
            temp -= 20;
            notas20++;
        }
        else if (temp >= 10)
        {
            temp -= 10;
            notas10++;
        }
        else if (temp >= 5)
        {
            temp -= 5;
            notas5++;
        }
        else if (temp >= 2)
        {
            temp -= 2;
            notas2++;
        }
        else
        {
            resto = temp;
            printf("Resto: %d\n", resto);
            break;
        }
        total++;
    }

    printf("Total de notas: %d\n", total);
    printf("Notas de 200: %d\n", notas200);
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);

    return total;
    
}

int main ()
{
    int saque = 267;
    calcular_notas(saque);

}