#include <stdio.h>

int main() {
    float valorReal, valor70Porcento;

    printf("Digite o valor (R$): ");
    scanf("%f", &valorReal);

    valor70Porcento = valorReal * 0.7;

    printf("70%% de R$ %.2f é: R$ %.2f\n", valorReal, valor70Porcento);

    return 0;
}
