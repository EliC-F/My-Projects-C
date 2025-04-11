//Multiplicação: Pedir dois números e exibir o resultado da multiplicação.

#include <stdio.h>

int main(){
    int num, num1, mult;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num);

    printf("\n");

    printf("Digite o segundo numero: ");
    scanf("%d", &num1);

    printf("\n");

    mult = num * num1;

    printf("A multiplicaçao entre %d e %d vale %d", num, num1, mult);
    return 0;
}
