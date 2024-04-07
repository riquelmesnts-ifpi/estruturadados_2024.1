#include <stdio.h>

int main() {
    float velocidadeMetrosPorSegundo, velocidadeKmPorHora;


    printf("Digite a velocidade em m/s: ");
    scanf("%f", &velocidadeMetrosPorSegundo);

   
    velocidadeKmPorHora = velocidadeMetrosPorSegundo * 3.6;

    // Impressão do resultado
    printf("A velocidade em km/h é: %.2f km/h\n", velocidadeKmPorHora);

    return 0;
}