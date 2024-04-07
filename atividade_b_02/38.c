#include <stdio.h>

int mdc(int a, int b) {
    // Função para calcular o Máximo Divisor Comum (MDC)
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, den1, num2, den2, somaNum, somaDen, mdcResult;

    
    printf("Digite o numerador da primeira fração: ");
    scanf("%d", &num1);
    printf("Digite o denominador da primeira fração: ");
    scanf("%d", &den1);

    
    printf("Digite o numerador da segunda fração: ");
    scanf("%d", &num2);
    printf("Digite o denominador da segunda fração: ");
    scanf("%d", &den2);

    
    somaNum = num1 * den2 + num2 * den1;
    somaDen = den1 * den2;

    
    mdcResult = mdc(somaNum, somaDen);
    somaNum /= mdcResult;
    somaDen /= mdcResult;

    
    printf("A soma das frações é: %d/%d\n", somaNum, somaDen);

    return 0;
}
