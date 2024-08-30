#include <stdio.h>

int main() {
    char tipoConsumidor;
    float consumo, valorConta;

    printf("Digite o tipo de consumidor (R - Residencial, C - Comercial, I - Industrial): ");
    scanf(" %c", &tipoConsumidor);
    printf("Digite o consumo de água em m³: ");
    scanf("%f", &consumo);

    switch(tipoConsumidor) {
        case 'R':
            valorConta = 5.00 + 0.05 * consumo;
            break;
        case 'C':
            if (consumo <= 80) {
                valorConta = 500.00;
            } else {
                valorConta = 500.00 + 0.25 * (consumo - 80);
            }
            break;
        case 'I':
            if (consumo <= 100) {
                valorConta = 800.00;
            } else {
                valorConta = 800.00 + 0.04 * (consumo - 100);
            }
            break;
        default:
            printf("Tipo de consumidor inválido!\n");
            return 1;
    }

    printf("Valor da conta de água: R$%.2f\n", valorConta);

    return 0;
}
