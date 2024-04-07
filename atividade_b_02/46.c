#include <stdio.h>

int main() {
    float valorMercadoria, entrada, prestacao;

    // Leitura do valor da mercadoria
    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valorMercadoria);

    // Cálculo da entrada e das duas prestações
    if (valorMercadoria >= 0) {
        entrada = valorMercadoria / 3;

        // Arredondamento para cima para garantir que a entrada seja maior ou igual às prestações
        entrada = ((int)(entrada + 0.5)) * 1.0;

        prestacao = entrada;

        // Impressão do resultado
        printf("Valor da entrada: R$ %.2f\n", entrada);
        printf("Valor das duas prestações: R$ %.2f\n", prestacao * 2);
    } else {
        printf("O valor da mercadoria deve ser um número positivo.\n");
    }

    return 0;
}