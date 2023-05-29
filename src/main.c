#include "pilha_vetor.h"
#include "pilha_lista_encadeada.h"
#include <stdio.h>

int main() {
    printf("Teste da Pilha sobre um vetor:\n");
    PilhaVetor* pilha_vetor = criar_pilha_vetor(10);

    // Inserir no topo da pilha
    for (int i = 1; i <= 5; i++) {
        inserir_topo_pilha_vetor(pilha_vetor, i);
    }

    // Remover do topo da pilha
    printf("Elementos removidos do topo da pilha:");
    while (!esta_vazia_pilha_vetor(pilha_vetor)) {
        printf(" %d", remover_topo_pilha_vetor(pilha_vetor));
    }
    printf("\n");

    // Indicar se a pilha está vazia
    printf("A pilha está vazia: %s\n", esta_vazia_pilha_vetor(pilha_vetor) ? "Sim" : "Não");

    // Retornar o tamanho da pilha
    printf("Tamanho da pilha: %d\n", tamanho_pilha_vetor(pilha_vetor));

    destruir_pilha_vetor(pilha_vetor);

    printf("\nTeste da Pilha sobre uma lista encadeada:\n");
    PilhaListaEncadeada* pilha_lista = criar_pilha_lista();

    // Inserir no topo da pilha
    for (int i = 1; i <= 5; i++) {
        inserir_topo_pilha_lista(pilha_lista, i);
    }

    // Remover do topo da pilha
    printf("Elementos removidos do topo da pilha:");
    while (!esta_vazia_pilha_lista(pilha_lista)) {
        printf(" %d", remover_topo_pilha_lista(pilha_lista));
    }
    printf("\n");

    // Indicar se a pilha está vazia
    printf("A pilha está vazia: %s\n", esta_vazia_pilha_lista(pilha_lista) ? "Sim" : "Não");

    // Retornar o tamanho da pilha
    printf("Tamanho da pilha: %d\n", tamanho_pilha_lista(pilha_lista));

    destruir_pilha_lista(pilha_lista);

    return 0;
}