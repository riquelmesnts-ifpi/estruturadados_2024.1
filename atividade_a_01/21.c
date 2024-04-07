#include <stdio.h>

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em °F: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = (5 * temperaturaFahrenheit - 160) / 9;

    printf("A temperatura em °C é igual a %.2f °C\n", temperaturaCelsius);

    return 0;
}
