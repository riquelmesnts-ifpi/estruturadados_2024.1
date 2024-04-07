#include <stdio.h>

int main() {
    int numero, inverso;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);

    inverso = ((numero % 10) * 100) + (((numero / 10) % 10) * 10) + (numero / 100);

    printf("O inverso do número é: %d\n", inverso);

    return 0;
}
