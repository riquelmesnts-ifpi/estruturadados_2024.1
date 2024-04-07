#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    if (numero2 != 0) {
        resultado = (numero1 + numero2) / (numero1 - numero2);
        printf("O resultado da divisão da soma pela subtração é igual a %.2f\n", resultado);
    } else {
        printf("A subtração não pode ser zero. Divisão indefinida.\n");
    }

    return 0;
}
