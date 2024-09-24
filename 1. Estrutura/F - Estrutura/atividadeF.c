#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;

typedef struct circulo {
 Ponto p1;
 int raio;
} Circulo; 

/* 4. Crie uma função void mostraCirculo(Circulo *c), a qual mostra 
na tela os valores de todos os campos de um
círculo. */
void exibiCirculo(Circulo *c) {
    printf("O centro do circulo é: (%d, %d)\n", c->p1.x, c->p1.y);
    printf("O Raio do circulo é: %d\n", c->raio);
}


int main(){
/* 1. Na função main(), crie a variável p1 do tipo Ponto e faça 
a atribuição de valores quaisquer para seus campos x e y. Em
seguida, peça para o usuário digitar esses valores.*/ 

Ponto p1;

printf("\nDigite o valor do ponto X: ");
scanf("%d", &p1.x);

printf("\nDigite o valor do ponto Y: ");
scanf("%d", &p1.y);

printf("Os valores digitados para X:%d e Y:%d\n", p1.x, p1.y);


/* 2. Crie uma variável c1 do tipo Circulo e faça a atribuição 
de valores quaisquer para os seus 3 campos. Em seguida, peça
para o usuário digitar esses valores. */

Circulo c1;

printf("\nValor do Raio: ");
scanf("%d", &c1.raio);

printf("Valor de X: ");
scanf("%d", &c1.p1.x);

printf("Valor de Y: ");
scanf("%d", &c1.p1.y);

printf("Valores digitados para o circulo C1:\n");
exibiCirculo(&c1);

/* 3. Crie uma variável 'Circulo *c2'. Inicialize a variável 
com uma área alocada dinamicamente, e faça a atribuição de
valores quaisquer para os seus 3 campos. Em seguida, peça para 
o usuário digitar esses valores. */
Circulo *c2;

c2 = (Circulo*)malloc(sizeof(Circulo));

printf("\nDigite o valor do raio para o circulo n° 2: ");
scanf("%d", &(c2->raio));

printf("Digite o valor de X para o circulo n° 2: ");
scanf("%d", &(c2->p1.x));

printf("Digite o valor de Y para o circulo n° 2: ");
scanf("%d", &(c2->p1.y));

printf("Valores digitados para o circulo C2:\n");
exibiCirculo(c2);

}