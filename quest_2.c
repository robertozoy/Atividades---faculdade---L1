/*Um fabricante de latas deseja desenvolver um algoritmo para calcular o custo de
uma lata cilíndrica de alumínio, sabendo-se que o custo do alumínio por m² é R$
100,00.*/

#include <stdio.h>
#define PI 3.14159
#define CUSTO_POR_METRO2 100.00

int main() {
    double altura, raio, area_lateral, area_circulo, area_total, custo;

    
    printf("Digite o raio da lata (em metros): ");
    scanf("%lf", &raio);
    printf("Digite a altura da lata (em metros): ");
    scanf("%lf", &altura);

    
    area_lateral = 2 * PI * raio * altura;
    area_circulo = PI * raio * raio;
    area_total = area_lateral + 2 * area_circulo;

    
    custo = area_total * CUSTO_POR_METRO2;

    
    printf("O custo da lata será R$ %.2lf\n", custo);

    return 0;
}
