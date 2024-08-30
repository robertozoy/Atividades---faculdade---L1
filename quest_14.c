#include <stdio.h>

int main() {
    int num1, num2, num3, num4, maior, soma;


    printf("Digite quatro números distintos: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);


    maior = num1;
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    if (num4 > maior) maior = num4;

    soma = num1 + num2 + num3 + num4 - maior;


    printf("A soma dos três menores números é: %d\n", soma);

    return 0;
}
