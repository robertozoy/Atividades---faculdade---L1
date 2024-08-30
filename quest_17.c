#include <stdio.h>

int main() {
    int numeroSala, capacidade, totalAlunos, cadeirasOcupadas;
    printf("Digite o número da sala: ");
    scanf("%d", &numeroSala);
    printf("Digite a capacidade da sala: ");
    scanf("%d", &capacidade);
    printf("Digite o total de alunos matriculados: ");
    scanf("%d", &totalAlunos);

    cadeirasOcupadas = totalAlunos;
    if (cadeirasOcupadas > capacidade) {
        printf("Erro: Número de alunos excede a capacidade da sala!\n");
        cadeirasOcupadas = capacidade; 
    }

    printf("Número da sala: %d\n", numeroSala);
    printf("Capacidade: %d\n", capacidade);
    printf("Número de cadeiras ocupadas: %d\n", cadeirasOcupadas);
    printf("Disponibilidade: %d cadeira(s) disponível(eis)\n", capacidade - cadeirasOcupadas);
    if (cadeirasOcupadas == capacidade) {
        printf("A sala está lotada.\n");
    } else {
        printf("A sala não está lotada.\n");
    }

    return 0;
}
