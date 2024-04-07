#include <stdio.h>

int main() {
    int binario, decimal = 0, base = 1, digito;

    printf("Digite um número binário de 4 dígitos: ");
    scanf("%d", &binario);

    while (binario > 0) {
        digito = binario % 10;
        decimal += digito * base;
        binario /= 10;
        base *= 2;
    }

    printf("O equivalente em decimal é: %d\n", decimal);

    return 0;
}