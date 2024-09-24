#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include "atividadeI.h"

struct ponto {
float x;
float y;
};

Ponto* cria (float x, float y) {
Ponto* p = (Ponto*) malloc(sizeof(Ponto));
if (p == NULL) {
printf("Memória cheia\n");
exit(1);
}
p->x = x;
p->y = y;
return p;
}



void acessa (Ponto* p, float* x, float* y) {
*x = p->x;
*y = p->y;
}

void limpa (Ponto* p) {
free(p);
}

void atribui (Ponto* p, float x, float y) {
p->x = x;
p->y = y;
}

float distancia_entre_pontos (Ponto* p1, Ponto* p2) {
float dx = p2->x - p1->x;


float dy = p2->y - p1->y;
return sqrt(dx*dx + dy*dy);
}

void limparTela() {
    system("clear");
}