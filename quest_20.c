#include <stdio.h>

int main() {
    int diaSemana;
    char tipoFita;
    float precoNormal, precoFinal;

    printf("Digite o dia da semana (1 para Domingo, 2 para Segunda, ..., 7 para Sábado): ");
    scanf("%d", &diaSemana);
    printf("Digite o tipo de fita (C para comum, L para lançamento): ");
    scanf(" %c", &tipoFita);

  
    printf("Digite o preço normal da fita: ");
    scanf("%f", &precoNormal);

  
    if (diaSemana == 2 || diaSemana == 3 || diaSemana == 5) {
        precoFinal = 0.60 * precoNormal;
    } else if (diaSemana == 4 || diaSemana == 6 || diaSemana == 7 || diaSemana == 1) {
        precoFinal = precoNormal; 
    } else {
        printf("Dia da semana inválido!\n");
        return 1;
    }

    
    if (tipoFita == 'L') {
        precoFinal *= 1.15; 
    }

    printf("Valor final do aluguel: R$%.2f\n", precoFinal);

    return 0;
}
