#include "pilha_lista_encadeada.h"
#include <stdio.h>
#include <stdlib.h>

PilhaListaEncadeada* criar_pilha_lista() {
    PilhaListaEncadeada* pilha = (PilhaListaEncadeada*)malloc(sizeof(PilhaListaEncadeada));
    pilha->topo = NULL;
    return pilha;
}

void destruir_pilha_lista(PilhaListaEncadeada* pilha) {
    No* no_atual = pilha->topo;
    while (no_atual != NULL) {
        No* proximo_no = no_atual->proximo;
        free(no_atual);
        no_atual = proximo_no;
    }
    free(pilha);
}

int esta_vazia_pilha_lista(PilhaListaEncadeada* pilha) {
    return pilha->topo == NULL;
}

int tamanho_pilha_lista(PilhaListaEncadeada* pilha) {
    int contador = 0;
    No* no_atual = pilha->topo;
    while (no_atual != NULL) {
        contador++;
        no_atual = no_atual->proximo;
    }
    return contador;
}

int ler_topo_pilha_lista(PilhaListaEncadeada* pilha) {
    if (esta_vazia_pilha_lista(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return -1; // Indicar erro
    }
    return pilha->topo->valor;
}

void inserir_topo_pilha_lista(PilhaListaEncadeada* pilha, int valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo = pilha->topo;
    pilha->topo = novo_no;
}

int remover_topo_pilha_lista(PilhaListaEncadeada* pilha) {
    if (esta_vazia_pilha_lista(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return -1; // Indicar erro
    }
    int valor = pilha->topo->valor;
    No* no_removido = pilha->topo;
    pilha->topo = pilha->topo->proximo;
    free(no_removido);
    return valor;
}
