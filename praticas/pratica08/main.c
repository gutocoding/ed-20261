#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void)
{
    Fila *minhaFila = fila_criar();
    if (minhaFila == NULL) {
        printf("Erro fatal: Nao foi possivel criar a fila.\n");
        return 1;
    }

    printf("Teste 1: A fila esta vazia?\n");
    if (fila_esta_vazia(minhaFila) == 1) {
        printf("-> Sim, a fila esta vazia.\n\n");
    }

    printf("Teste 2: Enfileirando os valores 10, 20 e 30...\n");
    fila_enfileirar(minhaFila, 10);
    fila_enfileirar(minhaFila, 20);
    fila_enfileirar(minhaFila, 30);
    
    printf("-> Estado atual da fila: \n");
    exibir_fila(minhaFila);
    printf("\n");

    printf("Teste 3: Quem e o primeiro da fila?\n");
    fila_inicio(minhaFila); 
    printf("\n");

    printf("Teste 4: Desenfileirando (atendendo) o primeiro elemento...\n");
    fila_desenfileirar(minhaFila);
    
    printf("-> Estado da fila apos o atendimento: \n");
    exibir_fila(minhaFila);
    printf("\n");

    printf("Teste 5: Quem e o novo primeiro da fila?\n");
    fila_inicio(minhaFila);
    printf("\n");

    printf("Teste 6: Encerrando o expediente e destruindo a fila...\n");
    destruir_fila(minhaFila);

    printf("\n--- TESTES FINALIZADOS COM SUCESSO ---\n");

    return 0;
}