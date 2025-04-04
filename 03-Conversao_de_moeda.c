/*Conversão de Moeda: Receber um valor em reais e converter para dólares (com uma taxa
de câmbio fixa). */

#include <stdio.h>

int main(){
    float r, d;
    printf("Digite o valor que voce quer converter em reais: ");
    scanf("%f", &r);

    printf("\n");

    d = r / 5.73; //Valor em 24/02/2005 as 1:16 pm
    printf("O valor da conversao de R$%.2f reais e igual a $%.2f dolares!", r, d);

    printf("\n");

    return 0;
}
