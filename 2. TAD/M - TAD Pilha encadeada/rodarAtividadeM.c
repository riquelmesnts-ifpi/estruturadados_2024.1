#include <stdio.h>
#include <stdlib.h>
#include "atividadeM.h"

int main() {

    Pilha* pilhaPropria = novaPilha();
    mostrarPilha(pilhaPropria);         

    pilhaPropria = push(pilhaPropria, 8);
    pilhaPropria = push(pilhaPropria, 20);
    pilhaPropria = push(pilhaPropria, 28);

    mostrarPilha(pilhaPropria);

    pilhaPropria = pop(pilhaPropria);

    mostrarPilha(pilhaPropria);
}