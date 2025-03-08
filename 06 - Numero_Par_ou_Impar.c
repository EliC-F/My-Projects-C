// Par ou Ímpar: Solicitar um número e verificar se ele é par ou ímpar.

#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O numeor %d e par!", num);
    }
    else{
        printf("o numero %d e impar!", num);
    }

    return 0;
}
