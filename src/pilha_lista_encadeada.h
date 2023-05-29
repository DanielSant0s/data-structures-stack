#ifndef PILHA_LISTA_ENCADEADA_H
#define PILHA_LISTA_ENCADEADA_H

typedef struct No {
    int valor;
    struct No* proximo;
} No;

typedef struct {
    No* topo;
} PilhaListaEncadeada;

PilhaListaEncadeada* criar_pilha_lista();
void destruir_pilha_lista(PilhaListaEncadeada* pilha);
int esta_vazia_pilha_lista(PilhaListaEncadeada* pilha);
int tamanho_pilha_lista(PilhaListaEncadeada* pilha);
int ler_topo_pilha_lista(PilhaListaEncadeada* pilha);
void inserir_topo_pilha_lista(PilhaListaEncadeada* pilha, int valor);
int remover_topo_pilha_lista(PilhaListaEncadeada* pilha);

#endif /* PILHA_LISTA_ENCADEADA_H */
