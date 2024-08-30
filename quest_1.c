#include <stdio.h>

int main() {
    int anos;
    long long batidas_por_ano, batidas_totais;

    int batidas_por_minuto = 60;
    int minutos_por_hora = 60;
    int horas_por_dia = 24;
    int dias_por_ano = 365;

   
    batidas_por_ano = (long long)batidas_por_minuto * minutos_por_hora * horas_por_dia * dias_por_ano;

  
    printf("Digite quantos anos a pessoa vai viver: ");
    scanf("%d", &anos);


    batidas_totais = batidas_por_ano * anos;

    
    printf("O coração da pessoa baterá aproximadamente %lld vezes em %d anos.\n", batidas_totais, anos);

    return 0;
}
