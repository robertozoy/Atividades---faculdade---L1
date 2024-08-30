/*Desenvolver um algoritmo para ler o nome, idade e peso de três pessoas. Calcular
e imprimir idade e o peso médio das três pessoas.*/

#include <stdio.h>

int main() {
    char nome1[50], nome2[50], nome3[50];
    int idade1, idade2, idade3;
    float peso1, peso2, peso3;
    float idade_media, peso_medio;

  
    printf("Digite o nome, idade e peso da primeira pessoa: ");
    scanf("%s %d %f", nome1, &idade1, &peso1);

    printf("Digite o nome, idade e peso da segunda pessoa: ");
    scanf("%s %d %f", nome2, &idade2, &peso2);

    printf("Digite o nome, idade e peso da terceira pessoa: ");
    scanf("%s %d %f", nome3, &idade3, &peso3);

 
    idade_media = (idade1 + idade2 + idade3) / 3.0;
    peso_medio = (peso1 + peso2 + peso3) / 3.0;


    printf("Idade média: %.2f\n", idade_media);
    printf("Peso médio: %.2f\n", peso_medio);

    return 0;
}
