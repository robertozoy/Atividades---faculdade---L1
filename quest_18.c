#include <stdio.h>

int main() {
    float salarioMinimo, salarioFuncionario, taxaImpostoNormal;
    int numDependentes;
    float impostoBruto, impostoTotal;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o número de dependentes: ");
    scanf("%d", &numDependentes);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salarioFuncionario);
    printf("Digite a taxa de imposto normal já paga: ");
    scanf("%f", &taxaImpostoNormal);

    if (salarioFuncionario > 12 * salarioMinimo) {
        impostoBruto = 0.20 * salarioFuncionario;
    } else if (salarioFuncionario > 5 * salarioMinimo) {
        impostoBruto = 0.08 * salarioFuncionario;
    } else {
        impostoBruto = 0.0;
    }

    impostoTotal = impostoBruto + 0.04 * impostoBruto - taxaImpostoNormal;

    printf("Imposto bruto: %.2f\n", impostoBruto);
    printf("Imposto total a pagar: %.2f\n", impostoTotal);

    return 0;
}
