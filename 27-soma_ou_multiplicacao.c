/* Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os
dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado
para uma variável C e mostrar seu conteúdo na tela. */

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("\n");

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("\n");

    if (a == b){
        c = a + b;
        printf("Como %d e %d sao iguais, a soma e: %d", a, b, c);
    }

    else{
        c = a * b;
        printf("Como %d e %d sao diferentes, a multiplicacao e: %d", a, b, c);
    }

    return 0;
}
