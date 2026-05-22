#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

struct conta_t {
    int numero;
    float saldo;
};

Conta criar_conta(int numero)
 {
    Conta c = (Conta)malloc(sizeof(struct conta_t));
    if (numero <= 0) 
    {
        printf("Numero de conta invalido.\n");
        printf("Liberando memoria alocada para a conta.\n");
        free(c);
        return NULL;
    }

    if (c == NULL)
    {
        printf("Erro ao alocar memoria para a conta.\n");
        return NULL;
    }

    c->numero = numero;
    c->saldo = 0.0f;
    return c;
}

void conta_depositar(Conta c, float valor) 
{
    if (c == NULL) 
    {
        printf("Conta invalida.\n");
        return;
    }

    if (valor < 0) 
    {
        printf("Valor de deposito invalido.\n");
        return;
    }
    c->saldo += valor;
}

int conta_sacar(Conta c, float valor) 
{
    if (c == NULL) 
    {
        printf("Conta invalida.\n");
        return 0;
    }

    if (valor < 0) 
    {
        printf("Valor de saque invalido.\n");
        return 0;
    }

    if (c->saldo >= valor) 
    {
        c->saldo -= valor;
        return 1; // Sucesso
    } else {
        printf("Saldo insuficiente para o saque.\n");
        return 0; // Falha
    }
}

float conta_ver_saldo(Conta c) 
{
    if (c == NULL) 
    {
        printf("Conta invalida.\n");
        return -1.0f; // Indica erro
    }
    return c->saldo;
}

void conta_destruir(Conta c) 
{
    if (c != NULL) 
    {
        printf("Liberando memoria alocada para a conta.\n");
        free(c);
    }
    else
    {
        printf("Conta ja e nula, nada a liberar.\n");
    }
}
