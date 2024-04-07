#include <stdio.h>

int main() {
    int numero, inverso, soma;

    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &numero);

    inverso = ((numero % 10) * 100) + (((numero / 10) % 10) * 10) + (numero / 100); // Inversão dos dígitos

    soma = numero + inverso;

    printf("A soma do número com seu inverso é: %d\n", soma);

    return 0;
}