#include <stdio.h>

int main() {
    int num1, num2;


    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

 
    if (num1 > num2) {
        printf("Maior: %d\nMenor: %d\n", num1, num2);
    } else if (num2 > num1) {
        printf("Maior: %d\nMenor: %d\n", num2, num1);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
