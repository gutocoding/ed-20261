#include <stdio.h>

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
}

int main ()
{
    static troco troquinho;
    printf("Saque de 500:\n");
    troquinho.valor = 500;
    sacar(troquinho);

    printf("Saque de 200:\n");
    troquinho.valor = 200;
    sacar(troquinho);

    printf("Saque de 1000:\n");
    troquinho.valor = 1000;
    sacar(troquinho);

    printf("Saque de 1001:\n");
    troquinho.valor = 1001;
    sacar(troquinho);    

    printf("Saque de -2:\n");
    troquinho.valor = -2;
    sacar(troquinho);  

    printf("Saque de 0:\n");
    troquinho.valor = 0;
    sacar(troquinho);  

    return 0;
}