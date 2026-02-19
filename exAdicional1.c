#include <stdio.h>

int main() {
    float salarioMinimo, salarioBruto, quantidade;

    printf("Digite o valor do salário minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salário bruto: ");
    scanf("%f", &salarioBruto);

    quantidade = salarioBruto / salarioMinimo;
    printf("\nGanha %.2f salarios minimos.\n", quantidade);
    return 0;
}
