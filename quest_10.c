#include <stdio.h>

int main() {
    int anos, meses, dias, total_dias;

   
    printf("Digite a idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

 
    total_dias = anos * 365 + meses * 30 + dias;


    printf("A idade total em dias é: %d dias\n", total_dias);

    return 0;
}
