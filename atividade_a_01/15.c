#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Base do triângulo: ");
    scanf("%f", &base);

    printf("Altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é igual a %.2f\n", area);

    return 0;
}
