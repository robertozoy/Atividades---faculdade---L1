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
