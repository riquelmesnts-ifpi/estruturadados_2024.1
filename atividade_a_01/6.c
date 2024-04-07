#include <stdio.h>

int main() {
    float velocidadeKmPorHora, velocidadeMetrosPorSegundo;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidadeKmPorHora);

    velocidadeMetrosPorSegundo = velocidadeKmPorHora / 3.6;

    printf("A velocidade em m/s é: %.2f m/s\n", velocidadeMetrosPorSegundo);

    return 0;
}
