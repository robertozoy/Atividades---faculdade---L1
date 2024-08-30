/*Uma locadora de charretes cobra R$ 10,00 de taxa para cada 3 horas de uso destas
e R$5,00 para cada 1 hora abaixo destas 3 horas. Fazer um algoritmo que dado a
quantidade de horas que a charrete foi usada calcular e escrever quanto o cliente
tem de pagar.*/

#include <stdio.h>

int main() {
    int horas;
    float custo;


    printf("Digite a quantidade de horas de uso: ");
    scanf("%d", &horas);

    
    if (horas <= 3) {
        custo = 5.0 * horas;
    } else {
        custo = 10.0 * (horas / 3) + 5.0 * (horas % 3);
    }

   
    printf("O custo total é: R$ %.2f\n", custo);

    return 0;
}
