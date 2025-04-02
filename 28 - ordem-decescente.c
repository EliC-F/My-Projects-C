//Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("\n");

    printf("Digite um numero diferente do anterior: ");
    scanf("%d", &b);

    printf("\n");

    printf("Digite um numero diferente dos anteriores: ");
    scanf("%d", &c);

    printf("\n");

    printf("\n A ordem decrescente: ");

    if (a >= b && a >= c) { 
        if (b >= c) {
            printf("%d, %d, %d\n", a, b, c);
        } 
        else {
            printf("%d, %d, %d\n", a, c, b);
        }
    } 
    
    else if (b >= a && b >= c) { 
        if (a >= c) {
            printf("%d, %d, %d\n", b, a, c);
        } 
        else {
            printf("%d, %d, %d\n", b, c, a);
        }
    } 
    
    else { 
        if (a >= b) {
            printf("%d, %d, %d\n", c, a, b);
        } 
        else {
            printf("%d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}