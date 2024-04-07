#include <stdio.h>

int main() {
    float numero1, numero2, numero3, soma, diferenca;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro número: ");
    scanf("%f", &numero3);

    soma = numero1 + numero2;
    diferenca = numero2 - numero3;

    printf("A soma dos dois primeiros números é igual a %.2f\n", soma);
    printf("A diferença entre os dois últimos números é igual a %.2f\n", diferenca);

    return 0;
}
