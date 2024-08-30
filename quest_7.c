#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    // Leitura das coordenadas dos pontos
    printf("Digite as coordenadas de A (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas de B (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    // Cálculo da distância
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Impressão do resultado
    printf("A distância entre A e B é: %.2f\n", distancia);

    return 0;
}
