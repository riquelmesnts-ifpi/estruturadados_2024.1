#include <stdio.h>

int main() {
    int horas, semanas, dias, horasRestantes;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    semanas = horas / (7 * 24);  
    horasRestantes = horas % (7 * 24);
    dias = horasRestantes / 24;
    horasRestantes = horasRestantes % 24;

    printf("%d horas correspondem a %d semanas, %d dias e %d horas.\n", horas, semanas, dias, horasRestantes);

    return 0;
}