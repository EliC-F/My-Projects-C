/* Escreva um algoritmo que pergunte a quantidade de km percorridos por um carro alugado
pelo usuário, assim como a quantidade de dias pelos quais o carro foi alugado. Calcule o
preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por Km rodado. */

#include <stdio.h>

int main(){
    int dia;
    float km, valor;

    printf("Informe a quantidade de quilometros rodados: ");
    scanf("%f", &km); 

    printf("\n");

    printf("Informe a quantidade de dias ultilizado: ");
    scanf("%d", &dia);

    printf("\n");

    valor = (dia * 60) + (km * 0.15);

    printf("%.2f km rodados e %d dias, o valor a pagar sera:  R$%.2f", km, dia, valor);

    return 0;
}
