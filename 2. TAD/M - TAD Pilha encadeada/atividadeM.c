#ifndef ATIVIDADEM_H
#define ATIVIDADEM_H

typedef struct No {
    int valor;
    struct No* proximo; 
} No;


typedef struct Pilha {
    No* topo; 
    int itens; 
} Pilha;

Pilha* newPilha();
int pop(Pilha* pilha);
void push(Pilha* pilha, int valor);
int estaVazia(Pilha* pilha);
void mostrarPilha(Pilha* pilha, char* titulo);

#endif