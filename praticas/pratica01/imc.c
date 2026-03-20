#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;

    printf("Insira sua altura: ");
    scanf("%f", &altura);
    if (altura <= 0)
    {
        printf("Altura invalida\n");
        return 0;
    }

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    if(peso <= 0)
    {
        printf("Peso invalido\n");
        return 0;
    }

    imc = peso/(altura * altura);

    if (imc >= 30)
    {
        printf("Obesidade. IMC: (%.2f)", imc);
    }
    else if(imc < 30 && imc >= 25)
    {
        printf("Sobrepeso. IMC: (%.2f)", imc);
    }
    else if(imc < 25 && imc >= 18,5)
    {
        printf("Peso normal. IMC: (%.2f)", imc);
    }
    else if (imc < 18,5)
    {
        printf("Abaixo do peso. IMC: (%.2f)", imc);
    }
    
}

