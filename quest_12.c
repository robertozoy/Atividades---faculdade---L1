#include <stdio.h>

int main() {
    int num1, num2, num3, maior, menor;


    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    maior = num1;
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;


    menor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;


    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}
