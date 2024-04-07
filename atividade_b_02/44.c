#include <stdio.h>

int main() {
    float quantidadeLatao, quantidadeCobre, quantidadeZinco;

    // Leitura da quantidade de latão
    printf("Digite a quantidade de latão desejada (em kg): ");
    scanf("%f", &quantidadeLatao);

    // Cálculo da quantidade de cobre e zinco
    quantidadeCobre = quantidadeLatao * 0.70;
    quantidadeZinco = quantidadeLatao * 0.30;

    // Impressão do resultado
    printf("Para obter %.2f kg de latão, são necessários %.2f kg de cobre e %.2f kg de zinco.\n",
           quantidadeLatao, quantidadeCobre, quantidadeZinco);

    return 0;
}
