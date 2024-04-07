#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;

    
    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    
    custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);

    
    printf("O custo ao consumidor é: R$ %.2f\n", custoConsumidor);

    return 0;
}
