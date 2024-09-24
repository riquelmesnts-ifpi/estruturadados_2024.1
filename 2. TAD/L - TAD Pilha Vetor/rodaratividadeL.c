#include "atividadeL.h"
#include <stdio.h>

int main() {
    
    Stack* pilhaPropria = new_stack();
    
    show_stack(pilhaPropria, "Pilha - Estágio: Inicial");
    show_stack(pilhaPropria, "Pilha - Estágio: Após Push");
    pop(pilhaPropria);
    show_stack(pilhaPropria, "Pilha - Estágio: Após Pop");
    free(pilhaPropria);

    return 0;
}