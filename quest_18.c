/*Desenvolver um algoritmo que determine o imposto de renda cobrado de um
funcionário pelo governo. Seu programa deverá ler o valor do salário mínimo, o n°
de dependentes, o salário do funcionário e a taxa de imposto normal que já foi
paga pelo funcionário. O imposto bruto é:
• 20% do salário do funcionário se o funcionário ganha mais de 12 salários
mínimos;
• 8% do salário do funcionário se o funcionário ganha mais de 5 salários mínimos
e • Quem ganha menos ou igual de 5 salários mínimos não é cobrado o imposto
de renda.
Obs.: Sabe-se que o governo cobra 4% de taxa adicional sobre o IMPOSTO
BRUTO.*/

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
