#include <stdio.h>

int main() {
    float raio, comprimento;
    const float PI = 3.14159265359; 

    printf("Raio da circunferência: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    printf("O comprimento da circunferência é igual a %.2f\n", comprimento);

    return 0;
}
