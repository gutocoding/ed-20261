#include <stdio.h>
#include "tabela_hash.h"

int main(void)
{
    TabelaHash *minhaHash = hash_criar(5);

    hash_inserir(minhaHash, 10);
    hash_inserir(minhaHash, 22);
    hash_inserir(minhaHash, 31);
    hash_inserir(minhaHash, 4);
    hash_inserir(minhaHash, 15);
    hash_inserir(minhaHash, 28);
    hash_inserir(minhaHash, 17);

    printf("Tabela Hash apos insercoes:\n");
    hash_exibir(minhaHash);

    printf("\nBuscando o valor 31: %s\n", hash_buscar(minhaHash, 31) ? "Encontrado" : "Nao encontrado");
    printf("Buscando o valor 99: %s\n", hash_buscar(minhaHash, 99) ? "Encontrado" : "Nao encontrado");

    printf("\nRemovendo os valores 31 e 10...\n");
    hash_remover(minhaHash, 31);
    hash_remover(minhaHash, 10);

    printf("\nTabela Hash apos remocoes:\n");
    hash_exibir(minhaHash);

    hash_destruir(minhaHash);

    return 0;
}