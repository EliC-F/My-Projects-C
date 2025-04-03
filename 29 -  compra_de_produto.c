/* Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de
etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição
de pagamento escolhida e efetuar o cálculo adequado.

Código  Condição de Pagamento                              Cálculo
1       Á vista em dinheiro ou pix                         recebe 10% de desconto
2       Cartão de Crédito em 1x                            recebe 15% de desconto
3       Cartão de Crédito em 2x (no cartão da loja)        preço normal de etiqueta sem juros
4       Cartão de Crédito em 2x (sem ser cartão da loja)   preço normal de etiqueta mais 10% */

#include <stdio.h>

int main(){
    float produto, par, desc;
    int opc;
    printf("Informe o preco do produto: ");
    scanf("%f", &produto);

    printf("\n");

    printf("\nEscolha a forma de pagamento: \nA vista ou no pix (1).\nCartao de credito 1x (2).\nCartao da loja no credito 2x (3).\nCartao da loja no credito 2x (4).");
    scanf("%d", &opc);

    switch (opc){
    case 1:

    desc = produto - (produto * 0.1);

    printf("Como o pagamento e a vista/pix, tem um desconto de 10%%,de R$%.2f ficou R$%.2f", produto, desc);
        break;

    case 2:

    desc = produto - (produto * 0.15);

    printf("Como o pagamento e em cartao de credito em 1x, tem um desconto de 15%%,de R$%.2f ficou R$%.2f", produto, desc);
        break;

    case 3:

    par = produto / 2;

    printf("Por ser um cartão da loja, o produto terá o valor de R$%.2f sem juros, podendo parcelar de 2x! ficando com duas parcelas de %.2f", produto, par);
        break;

case 4:

    par = (produto + (produto * 0.1)) / 2;

    printf("Por ser um cartão que nao e da loja, o produto terá o valor de R$%.2f mais 10%% de juros, podendo parcelar de 2x! ficando com duas parcelas de %.2f", produto, par);
        break;
        
    default:
    printf("A opcao escolhida nao e valida!");
        break;
    }

    return 0;
}