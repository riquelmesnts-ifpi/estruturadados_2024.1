#include <stdio.h>

int main() {
    float m, cm;

    printf("Digite a quantidade de metros: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("O valor equivalente em centímetros é: %.2f\n", cm);

    return 0;
}