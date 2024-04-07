#include <stdio.h>

int main() {
    float numeroA, numeroB;

    printf("Digite o primeiro número (A): ");
    scanf("%f", &numeroA);

    printf("Digite o segundo número (B): ");
    scanf("%f", &numeroB);

    printf("Os números em ordem inversa são: %.2f, %.2f\n", numeroB, numeroA);

    return 0;
}
