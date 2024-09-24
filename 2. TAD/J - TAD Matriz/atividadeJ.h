#ifndef ATIVIDADEJ_H
#define ATIVIDADEJ_H

typedef struct matriz Matriz;

Matriz* novaMatriz(int m, int n);

void limpa(Matriz* mat);

float acessa(Matriz* mat, int i, int j);

void atribui(Matriz* mat, int i, int j, float v);

int linhas(Matriz* mat);

int colunas(Matriz* mat);

#endif