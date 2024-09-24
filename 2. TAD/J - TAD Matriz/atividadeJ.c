#include <stdlib.h>
#include <stdio.h> 
#include "atividadeJ.h"

struct matriz{
    int linha;
    int coluna;
    float* v;
};

typedef struct matriz Matriz;

Matriz* novaMatriz(int m, int n){
    Matriz* mat = (Matriz*) malloc (sizeof(Matriz));

    mat->linha = m;
    mat->coluna = n;
    mat->v = (float*) malloc (m * n * sizeof(float));
    return mat;
}

void limpa(Matriz* mat){
    free(mat->v);
    free(mat);
}

float acessa(Matriz* mat, int i, int j){
    int k;
    k = i * mat->coluna + j;
    return mat->v[k];
}

void atribui(Matriz* mat, int i, int j, float v){
    int k;
    k = i * mat->coluna + j;
    mat->v[k] = v;
}

int linhas(Matriz* mat){
    return mat->linha;
}

int colunas(Matriz* mat){
    return mat->coluna;
}