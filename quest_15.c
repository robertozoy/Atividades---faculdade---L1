#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2;


    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);


    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("A equação possui uma raiz real: %.2f\n", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais: %.2f e %.2f\n", raiz1, raiz2);
    }

    return 0;
}
