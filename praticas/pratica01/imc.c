#include <stdio.h>

float calcular_imc(float peso, float altura)
{
    if (altura <= 0)
    {
        printf("Altura invalida\n");
        return 0;
    }

    if(peso <= 0)
    {
        printf("Peso invalido\n");
        return 0;
    }

    float imc = peso/(altura * altura);

     if (imc >= 30)
    {
        printf("Obesidade. IMC: (%.2f)\n", imc);
    }
    else if(imc < 30 && imc >= 25)
    {
        printf("Sobrepeso. IMC: (%.2f)\n", imc);
    }
    else if(imc < 25 && imc >= 18.5)
    {
        printf("Peso normal. IMC: (%.2f)\n", imc);
    }
    else if (imc < 18.5)
    {
        printf("Abaixo do peso. IMC: (%.2f)\n", imc);
    }

    return imc;


}

int main()
{
    float peso;
    float altura;
    float imc;

    altura = 1.75;
    peso = 80;
    imc = calcular_imc(peso, altura);

    altura = 1.75;
    peso = 0;
    imc = calcular_imc(peso, altura);

    altura = 1.75;
    peso = 50;
    imc = calcular_imc(peso, altura);

    altura = 1.75;
    peso = 60;
    imc = calcular_imc(peso, altura);

    altura = 0.0f;
    peso = 20;
    imc = calcular_imc(peso, altura);

    altura = 1.75f;
    peso = 2;
    imc = calcular_imc(peso, altura);


}

