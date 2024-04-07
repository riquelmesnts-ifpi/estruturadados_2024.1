#include <stdio.h>

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    printf("Digite a temperatura em °C: ");
    scanf("%f", &temperaturaCelsius);

    temperaturaFahrenheit = (9 * temperaturaCelsius + 160) / 5;

    printf("A temperatura em °F é igual a %.2f °C\n", temperaturaFahrenheit);

    return 0;
}
