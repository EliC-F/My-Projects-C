/* Uma empresa contrata um encanador a R$ 20,00 por dia. Crie um algoritmo que solicite o
número de dias trabalhados pelo encanador e imprima o valor líquido a ser pago, sabendo
que são descontados 8% de imposto de renda. */

#include <stdio.h>

int main(){
    int dia;
    float salario, imposto;
    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &dia);
    
    printf("\n");

    salario = dia * 20;

    imposto = salario - (0.08 * salario);

    printf("A quantidade de dias trabalhados foi %d, o slario a ser pago seria de R$%.2f, com o desnconto de imposto fica R$%.2f.", dia, salario, imposto);

    return 0;
}