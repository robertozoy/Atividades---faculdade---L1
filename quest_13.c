/*Desenvolver um algoritmo que leia um número inteiro e verifique se o número é
divisível por 5 e por 3 ao mesmo tempo.*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);


    if (num % 5 == 0 && num % 3 == 0) {
        printf("O número %d é divisível por 5 e por 3.\n", num);
    } else {
        printf("O número %d não é divisível por 5 e por 3.\n", num);
    }

    return 0;
}
