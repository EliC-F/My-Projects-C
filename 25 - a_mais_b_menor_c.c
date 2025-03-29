//Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C. 

#include <stdio.h>

int main(){
    int a, b, c, soma;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("\n");

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\n");

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("\n");

    soma = a + b;

    if (soma < c){
        printf("A soma %d + %d = %d e menor que %d.", a, b, soma, c);
    }

    else{
        printf("A soma %d + %d = %d nao e menor que %d.", a, b, soma, c);
    }

    return 0;
}