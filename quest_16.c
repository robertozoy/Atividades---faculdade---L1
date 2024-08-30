/*Desenvolver um algoritmo para ler um número “x” e calcular e imprimir o valor de
“y” de acordo com as condições abaixo: y=x, sex<1; y=0, sex=1; y = x², se x > 1; */

#include <stdio.h>

int main() {
    int x, y;


    printf("Digite o valor de x: ");
    scanf("%d", &x);


    if (x < 1) {
        y = x;
    } else if (x == 1) {
        y = 0;
    } else {
        y = x * x;
    }

  
    printf("O valor de y é: %d\n", y);

    return 0;
}
