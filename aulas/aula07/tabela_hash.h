#ifndef TABELA_HASH_H
#define TABELA_HASH_H

typedef struct {
    int *dados;
    int quantidade;
} TabelaHash;

TabelaHash *criar(int tamanho);
void destruir(TabelaHash *tabela);
void inserir(TabelaHash *tabela, int valor);
int buscar(TabelaHash *tabela, int valor);
void remover(TabelaHash *tabela, int valor);
int tabela_vazia(TabelaHash *tabela);

#endif