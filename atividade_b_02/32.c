#include <stdio.h>

int main() {
    int numero, inverso, diferenca;

    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &numero);

    inverso = ((numero % 10) * 100) + (((numero / 10) % 10) * 10) + (numero / 100); // Inversão dos dígitos

    diferenca = numero - inverso;

    printf("A diferença entre o número e seu inverso é: %d\n", diferenca);

    return 0;
}