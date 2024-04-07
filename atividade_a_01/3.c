#include <stdio.h>

int main() {
    int minutos, horas, minutosRestantes;

    printf("Digite a quantidade de minutos: ");

    horas = minutos / 60;
    minutosRestantes = minutos % 60;

    printf("O equivalente em horas e minutos é: %d horas e %d minutos\n", horas, minutosRestantes);

    return 0;
}
