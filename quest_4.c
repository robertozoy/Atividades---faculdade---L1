#include <stdio.h>

int main() {
    double A, B, C, delta;

    printf("Digite os valores dos coeficientes A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    delta = B * B - 4 * A * C;


    printf("O valor do discriminante (delta) é: %.2lf\n", delta);

    return 0;
}
