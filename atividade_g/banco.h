#ifndef BANCO_H
#define BANCO_H

#include "conta.h"

typedef struct {
    char nome[100];
    char endereco[200];
    Conta contas[100]; 
    int num_contas; 
} Banco;

void criar_banco(Banco *banco, char nome[], char endereco[]);
void adicionar_conta(Banco *banco, Conta *conta);

#endif