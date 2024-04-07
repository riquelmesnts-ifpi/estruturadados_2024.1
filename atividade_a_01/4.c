#include <stdio.h>

int main() {
    float valorDolar, valorEmDolar, valorEmReal;

    printf("Digite o valor do dólar (em R$): ");
    scanf("%f", &valorDolar);

    printf("Digite o valor em dólar: ");
    scanf("%f", &valorEmDolar);

    valorEmReal = valorDolar * valorEmDolar;

    printf("O equivalente em real é: R$ %.2f\n", valorEmReal);

    return 0;
}
