#include <stdio.h>

int main() {
    int horas, minutos, equivalenteEmMinutos;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    equivalenteEmMinutos = horas * 60 + minutos;

    printf("O equivalente em minutos é: %d minutos\n", equivalenteEmMinutos);

    return 0;
}