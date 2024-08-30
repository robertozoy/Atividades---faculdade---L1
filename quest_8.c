/*Dada a base e a altura de uma pirâmide. Fazer um algoritmo que calcule e escreva o volume
desta. Fórmula: volume = 1 / 3.0 * (base * altura);*/

#include <stdio.h>

int main() {
    float base, altura, volume;

  
    printf("Digite a base da pirâmide: ");
    scanf("%f", &base);

    printf("Digite a altura da pirâmide: ");
    scanf("%f", &altura);

    volume = (1.0 / 3.0) * (base * altura);

    printf("O volume da pirâmide é: %.2f\n", volume);

    return 0;
}
