#include <stdio.h>

int main() {
    float salario, novoSalario;

    printf("Digite o salário do trabalhador: R$ ");
    scanf("%f", &salario);

    novoSalario = salario * 1.25;

    printf("O novo salário com aumento de 25%% é: R$ %.2f\n", novoSalario);

    return 0;
}
