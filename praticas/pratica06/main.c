#include <stdio.h>
#include "lista_linear.h"

int main() {
    printf("Criando lista...\n");
    Lista minha_lista = lista_criar();

    printf("Inserindo valores (10, 20, 30)...\n");
    lista_inserir(minha_lista, 10);
    lista_inserir(minha_lista, 20);
    lista_inserir(minha_lista, 30);

    printf("Elementos da lista: ");
    lista_exibir(minha_lista);

    printf("\nBuscando o valor 20: ");
    if (lista_buscar(minha_lista, 20)) {
        printf("Encontrado!\n");
    } else {
        printf("Nao encontrado.\n");
    }

    printf("\nRemovendo o valor 20...\n");
    lista_remover(minha_lista, 20);
    
    printf("Elementos da lista apos remocao: ");
    lista_exibir(minha_lista);

    printf("\nDestruindo a lista...\n");
    lista_destruir(minha_lista);
    
    return 0;
}