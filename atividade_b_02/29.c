#include <stdio.h>

int main() {
    int meses, anos, mesesRestantes;

    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    anos = meses / 12;
    mesesRestantes = meses % 12;

    printf("%d meses correspondem a %d anos e %d meses.\n", meses, anos, mesesRestantes);

    return 0;
}