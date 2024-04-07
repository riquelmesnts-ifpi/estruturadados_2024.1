#include <stdio.h>

int main() {
    float distanciaKm, distanciaMetros;

    printf("Digite a quantidade de quilômetros: ");
    scanf("%f", &distanciaKm);

    distanciaMetros = distanciaKm * 1000;

    printf("A distância em metros é %.2f metros\n", distanciaMetros);

    return 0;
}
