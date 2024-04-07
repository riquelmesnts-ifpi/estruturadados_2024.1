#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, somaElementos;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    somaElementos = centena + dezena + unidade;

    printf("A soma dos elementos é: %d\n", somaElementos);

    return 0;
}
