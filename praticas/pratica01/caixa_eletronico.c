#include <stdio.h>

<<<<<<< HEAD
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
    
=======
typedef struct{
    int valor, qtd200, qtd100, qtd50, qtd20, qtd10, qtd5, qtd2;
}troco;

troco sacar(troco valortroco)
{
    printf("Troco para %d: \n", valortroco.valor);
    if (valortroco.valor > 1000 || valortroco.valor < 3)
    {
        printf("Valor de saque inválido.\n");
        return valortroco;
    }


    int temp = valortroco.valor;

    valortroco.qtd200 = temp / 200;
    temp = temp % 200;

    valortroco.qtd100 = temp / 100;
    temp = temp % 100;

    valortroco.qtd50 = temp / 50;
    temp = temp % 50;

    valortroco.qtd20 = temp / 20;
    temp = temp % 20;

    valortroco.qtd10 = temp / 10;
    temp = temp % 10;

    valortroco.qtd5 = temp / 5;
    temp = temp % 5;

    valortroco.qtd2 = temp / 2;
    temp = temp % 2;

    printf("%d Notas de 200\n", valortroco.qtd200);
    printf("%d Notas de 100\n", valortroco.qtd100);
    printf("%d Notas de 50\n", valortroco.qtd50);
    printf("%d Notas de 20\n", valortroco.qtd20);
    printf("%d Notas de 10\n", valortroco.qtd10);
    printf("%d Notas de 5\n", valortroco.qtd5);
    printf("%d Notas de 2\n", valortroco.qtd2);

    if (temp > 0)
    {
        printf("Resto: %d", temp);
    }



    return valortroco;
>>>>>>> ee8d4fa4b81bd1eca8d07fde0ac8d872ba5af4ce
}

int main ()
{
<<<<<<< HEAD
    int saque = 267;
    calcular_notas(saque);

=======
    static troco troquinho;
    troquinho.valor = 500;
    sacar(troquinho);

    troquinho.valor = 200;
    sacar(troquinho);

    troquinho.valor = 1000;
    sacar(troquinho);

    troquinho.valor = 1001;
    sacar(troquinho);    

    troquinho.valor = -2;
    sacar(troquinho);  

    troquinho.valor = 0;
    sacar(troquinho);  

    return 0;
>>>>>>> ee8d4fa4b81bd1eca8d07fde0ac8d872ba5af4ce
}