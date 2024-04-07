#include <stdio.h>

int main() {
    int minutos, dias, horas, minutosRestantes;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    dias = minutos / (24 * 60);  // 1 dia = 24 horas, 1 hora = 60 minutos
    minutosRestantes = minutos % (24 * 60);
    horas = minutosRestantes / 60;
    minutosRestantes = minutosRestantes % 60;

    printf("%d minutos correspondem a %d dias, %d horas e %d minutos.\n", minutos, dias, horas, minutosRestantes);

    return 0;
}