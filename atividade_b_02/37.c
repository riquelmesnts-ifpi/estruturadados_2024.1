#include <stdio.h>

int main() {
    int idadeEmDias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idadeEmDias);

    anos = idadeEmDias / 365;
    meses = (idadeEmDias % 365) / 30;
    dias = (idadeEmDias % 365) % 30;

    printf("A idade expressa em anos, meses e dias é: %d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}
