#include <stdio.h>

int main() {
    int x, y;


    printf("Digite o valor de x: ");
    scanf("%d", &x);


    if (x < 1) {
        y = x;
    } else if (x == 1) {
        y = 0;
    } else {
        y = x * x;
    }

  
    printf("O valor de y é: %d\n", y);

    return 0;
}
