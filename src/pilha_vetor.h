#ifndef PILHA_VETOR_H
#define PILHA_VETOR_H

typedef struct {
    int* vetor;
    int capacidade;
    int topo;
} PilhaVetor;

PilhaVetor* criar_pilha_vetor(int capacidade);
void destruir_pilha_vetor(PilhaVetor* pilha);
int esta_vazia_pilha_vetor(PilhaVetor* pilha);
int tamanho_pilha_vetor(PilhaVetor* pilha);
int ler_topo_pilha_vetor(PilhaVetor* pilha);
void inserir_topo_pilha_vetor(PilhaVetor* pilha, int valor);
int remover_topo_pilha_vetor(PilhaVetor* pilha);

#endif /* PILHA_VETOR_H */
