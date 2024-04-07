#include <stdio.h>

int main() {
    int metros, km, metrosRestantes;

    printf("Digite a quantidade de metros: ");
    scanf("%d", &metros);

    km = metros / 1000;
    metrosRestantes = metros % 1000;

    printf("%d metros correspondem a %d quilômetros e %d metros.\n", metros, km, metrosRestantes);

    return 0;

}