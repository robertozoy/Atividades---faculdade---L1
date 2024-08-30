#include <stdio.h>

int main() {
    int M, N, L1, L2, H;

    
    printf("Digite dois números inteiros positivos (M e N) com M > N: ");
    scanf("%d %d", &M, &N);

    if (M <= N) {
        printf("Erro: M deve ser maior que N.\n");
        return 1;
    }


    L1 = M * M - N * N;
    L2 = 2 * M * N;
    H = M * M + N * N;


    printf("Lados do triângulo: L1 = %d, L2 = %d, Hipotenusa = %d\n", L1, L2, H);

    return 0;
}
