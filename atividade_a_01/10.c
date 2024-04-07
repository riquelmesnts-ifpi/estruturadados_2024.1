#include <stdio.h>

int main() {
    int numero1, numero2, quociente, resto;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    if (numero2 != 0) {

        quociente = numero1 / numero2;
        resto = numero1 % numero2;

        printf("Quociente da divisão: %d\n", quociente);
        printf("Resto da divisão: %d\n", resto);
    } else {
        printf("A divisão por zero não é permitida.\n");
    }

    return 0;
}
