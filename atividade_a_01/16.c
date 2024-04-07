#include <stdio.h>

int main() {
    float lado, area;

    printf("Lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A área do quadrado é igual a %.2f\n", area);

    return 0;
}
