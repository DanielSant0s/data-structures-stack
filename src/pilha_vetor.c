#include "pilha_vetor.h"
#include <stdio.h>
#include <stdlib.h>

PilhaVetor* criar_pilha_vetor(int capacidade) {
    PilhaVetor* pilha = (PilhaVetor*)malloc(sizeof(PilhaVetor));
    pilha->vetor = (int*)malloc(capacidade * sizeof(int));
    pilha->capacidade = capacidade;
    pilha->topo = -1;
    return pilha;
}

void destruir_pilha_vetor(PilhaVetor* pilha) {
    free(pilha->vetor);
    free(pilha);
}

int esta_vazia_pilha_vetor(PilhaVetor* pilha) {
    return pilha->topo == -1;
}

int tamanho_pilha_vetor(PilhaVetor* pilha) {
    return pilha->topo + 1;
}

int ler_topo_pilha_vetor(PilhaVetor* pilha) {
    if (esta_vazia_pilha_vetor(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return -1; // Indicar erro
    }
    return pilha->vetor[pilha->topo];
}

void inserir_topo_pilha_vetor(PilhaVetor* pilha, int valor) {
    if (pilha->topo == pilha->capacidade - 1) {
        printf("Erro: a pilha está cheia.\n");
        return; // Indicar erro
    }
    pilha->topo++;
    pilha->vetor[pilha->topo] = valor;
}

int remover_topo_pilha_vetor(PilhaVetor* pilha) {
    if (esta_vazia_pilha_vetor(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return -1; // Indicar erro
    }
    int valor = pilha->vetor[pilha->topo];
    pilha->topo--;
    return valor;
}
