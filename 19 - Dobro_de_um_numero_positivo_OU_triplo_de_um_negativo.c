/* 2. Encontre o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo,
imprimindo o resultado. */

#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero Real qualquer: ");
    scanf("%d", &num);

    printf("\n");

    if (num > 0){
        int dob;

        dob = num * 2;

        printf("O numero %d e positivo, seu dobro vale: %d", num, dob);
    }

    else{
        int trip;

        trip = num * 3;

        printf("O numero %d e negativo, seu dobro vale: %d", num, trip);
    }

    return 0;
}