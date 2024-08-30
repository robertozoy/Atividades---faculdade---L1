#include <stdio.h>
#include <math.h>

int main() {
    double L1, L2, L3, semi_perimetro, area;

    printf("Digite os comprimentos dos três lados do triângulo: ");
    scanf("%lf %lf %lf", &L1, &L2, &L3);

   
    semi_perimetro = (L1 + L2 + L3) / 2;

    
    area = sqrt(semi_perimetro * (semi_perimetro - L1) * (semi_perimetro - L2) * (semi_perimetro - L3));

 
    printf("A área do triângulo é: %.2lf\n", area);

    return 0;
}
