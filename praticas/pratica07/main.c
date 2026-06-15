#include <stdio.h>
#include "pilha.h"

int main (void)
{
    Pilha *minhaPilha = pilha_criar();
    pilha_empilhar(minhaPilha, 10);
    pilha_empilhar(minhaPilha, 20);
    pilha_empilhar(minhaPilha, 50);

    pilha_exibir(minhaPilha);
    pilha_desempilhar(minhaPilha);
    pilha_exibir(minhaPilha);
    pilha_topo(minhaPilha);
    pilha_destruir(minhaPilha);

    return 0;
}