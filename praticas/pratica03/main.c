#include <stdio.h>
#include "conta.h"

int main ()
{
    printf("Criando contas de numero 12345...\n");
    Conta minha_conta = criar_conta(12345);
    printf("Criando contas de numero -20...\n");
    Conta minha_conta2 = criar_conta(-20);
    printf("Criando contas de numero 0...\n");
    Conta minha_conta3 = criar_conta(0);

    printf("Saldo inicial: %.2f\n", conta_ver_saldo(minha_conta));
    printf("Depositando 1000...\n");
    conta_depositar(minha_conta, 1000.0f);
    printf("depositando -50...\n");
    conta_depositar(minha_conta, -50.0f);

    printf("Saldo apos deposito: %.2f\n", conta_ver_saldo(minha_conta));

    printf("Sacando 200...\n");
    conta_sacar(minha_conta, 200.0f);
    printf("Saldo apos saque: %.2f\n", conta_ver_saldo(minha_conta));

    printf("Sacando -30...\n");
    conta_sacar(minha_conta, -30.0f);
    printf("Saldo apos saque invalido: %.2f\n", conta_ver_saldo(minha_conta));

    printf("Destruindo conta de numero -20...\n");
    conta_destruir(minha_conta2);
    printf("Destruindo conta de numero 0...\n");
    conta_destruir(minha_conta3);
    printf("Destruindo conta de numero 12345...\n");
    conta_destruir(minha_conta);
    return 0;
}