#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Base do retângulo: ");
    scanf("%f", &base);

    printf("Altura do retângulo: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("A área do retângulo é igual a %.2f\n", area);

    return 0;
}
