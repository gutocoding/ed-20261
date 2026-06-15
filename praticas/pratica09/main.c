#include <stdio.h>
#include "arvore_binaria.h"

int main(void)
{
    Arvore *minhaArvore = arvore_criar();

    arvore_inserir(minhaArvore, 50);
    arvore_inserir(minhaArvore, 30);
    arvore_inserir(minhaArvore, 70);
    arvore_inserir(minhaArvore, 20);
    arvore_inserir(minhaArvore, 40);
    arvore_inserir(minhaArvore, 60);
    arvore_inserir(minhaArvore, 80);

    printf("Percurso em Pre-ordem:\n");
    arvore_exibir_pre_ordem(minhaArvore);

    printf("\nPercurso em Em-ordem:\n");
    arvore_exibir_em_ordem(minhaArvore);

    printf("\nPercurso em Pos-ordem:\n");
    arvore_exibir_pos_ordem(minhaArvore);

    arvore_destruir(minhaArvore);

    return 0;
}