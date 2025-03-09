//Desconto em Produto: Solicitar o preço de um produto e um percentual de desconto, calculando o valor final após o desconto.

#include <stdio.h>

int main(){
    float prod, desc;
    printf("Informe o valor do produtor: ");
    scanf("%f", &prod);

    printf("\n");

    desc = prod - (prod * 0.05); // 5% de desconto.

    printf("O valor do seu produtor e R$%.2f com o desconto de 5 porcento fica igual a R$%.2f", prod, desc);

    return 0;
}