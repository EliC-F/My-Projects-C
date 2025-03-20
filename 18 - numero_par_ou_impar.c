/* Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar. */ 

#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\n");

    if (num % 2 == 0){
        printf("O numeor %d e par!", num);
    }

    else{
        printf("O numeor %d e impar!", num);
    }

    return 0;
}