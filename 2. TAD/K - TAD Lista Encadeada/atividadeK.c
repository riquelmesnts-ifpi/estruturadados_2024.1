#include <stdio.h>
#include <stdlib.h>
#include "atividadeK.h"



Lista* novaLista(){
    return NULL;
}

Lista* adicionarInicio(Lista* lista, int valor){
    Lista* novo = (Lista*) malloc (sizeof(Lista));
    
    novo->valor = valor;
    novo->proximo = lista;
    return novo;
}

Lista* adicionarFinal(Lista* lista, int valor){
    if(EhVazia(lista)){
        return adicionarInicio(lista, valor);
    }

    Lista* novo = (Lista*) malloc (sizeof(Lista));
    
    novo->valor = valor;
    Lista* ultimo = lista;

    while(ultimo->proximo != NULL){
        ultimo = ultimo->proximo;
    }
    ultimo->proximo = novo;
    novo->proximo = NULL;

    return lista;

}

void mostrar(Lista* lista){
    Lista* p;
    if (EhVazia(lista)){
        printf("\nNão há nada a mostrar!\n");
        return;
    }

    for(p = lista; p != NULL; p = p->proximo){
        printf("%d ", p->valor);
    }

}

int EhVazia(Lista* lista){
    if (lista == NULL){
        return 1;
    }
    return 0;
}