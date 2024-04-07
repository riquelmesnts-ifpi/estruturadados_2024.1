#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundosRestantes;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;  
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundosRestantes);

    return 0;
}




