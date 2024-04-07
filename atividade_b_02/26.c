#include <stdio.h>

int main() {
    int dias, semanas, diasRestantes;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    semanas = dias / 7;
    diasRestantes = dias % 7;

    printf("%d dias correspondem a %d semanas e %d dias.\n", dias, semanas, diasRestantes);

    return 0;
}