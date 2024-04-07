#include <stdio.h>

int main() {
    int valorSolicitado, notas50, notas10, notas5, notas1;

    // Leitura do valor da quantia solicitada
    printf("Digite o valor da quantia solicitada: R$ ");
    scanf("%d", &valorSolicitado);

    // Cálculo da distribuição ótima
    notas50 = valorSolicitado / 50;
    valorSolicitado %= 50;

    notas10 = valorSolicitado / 10;
    valorSolicitado %= 10;

    notas5 = valorSolicitado / 5;
    valorSolicitado %= 5;

    notas1 = valorSolicitado;

    // Impressão do resultado
    printf("Distribuição ótima das notas:\n");
    printf("%d nota(s) de R$ 50\n", notas50);
    printf("%d nota(s) de R$ 10\n", notas10);
    printf("%d nota(s) de R$ 5\n", notas5);
    printf("%d nota(s) de R$ 1\n", notas1);

    return 0;
}
