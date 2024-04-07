#include <stdio.h>

int main() {
    float numero1, numero2, numero3, media;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%f", &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    printf("A média dos números é: %.2f\n", media);

    return 0;
}