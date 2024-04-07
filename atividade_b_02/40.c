#include <stdio.h>

int main() {
    int anosFumando, cigarrosPorDia;
    float precoCarteira, gastoTotal;

    // Leitura dos dados de entrada
    printf("Digite o número de anos que você fuma: ");
    scanf("%d", &anosFumando);

    printf("Digite o número de cigarros fumados por dia: ");
    scanf("%d", &cigarrosPorDia);

    printf("Digite o preço de uma carteira de cigarros: ");
    scanf("%f", &precoCarteira);

    // Cálculo do gasto total
    gastoTotal = (anosFumando * 365 * cigarrosPorDia / 20) * precoCarteira;

    // Impressão do resultado
    printf("O dinheiro gasto por um fumante é: R$ %.2f\n", gastoTotal);

    return 0;
}
