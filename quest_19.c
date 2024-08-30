/*Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O
custo da água varia dependendo se o consumidor é residencial, comercial ou
industrial. A regra para calcular a conta é:
– Residencial: R$5,00 de taxa mais R$0,05 por m³ gastos;
– Comercial: R$500,00 para os primeiros 80 m³ gastos mais R$0,25 por m³
gastos; – Industrial: R$800,00 para os primeiros 100 m³ gastos mais R$0,04 por
m³ gastos; O programa deverá ler a conta do cliente, consumo de água por metros
cúbicos e
o tipo de consumidor ( residencial, comercial e industrial ). Como resultado,
imprima a conta do cliente e o valor real a ser pago pelo mesmo.*/

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
