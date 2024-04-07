#include <stdio.h>

int main() {
    float pesoKg, pesoGramas;

    printf("Digite a quantidade de quilogramas: ");
    scanf("%f", &pesoKg);

    pesoGramas = pesoKg * 1000;

    printf("O peso em gramas é %.2f gramas\n", pesoGramas);

    return 0;
}
