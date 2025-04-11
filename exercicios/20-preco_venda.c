/* Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da
compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Elabore um algoritmo
que leia o valor do produto e imprima o valor de venda para o produto. */

#include <stdio.h>

int main(){
    float preco;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    printf("\n");

    if (preco < 20.00){
        float lucro;

        lucro = preco + (preco * 0.45);

        printf("O preco do produto e R$%.2f, com o ajuste de preco de 45%%, fica R$%.2f", preco, lucro);
        
    }

    else{
        float lucro;

        lucro = preco + (preco * 0.30);

        printf("O preco do produto e R$%.2f, com o ajuste de preco de 30%%, fica R$%.2f", preco, lucro);
    }

    return 0;
}
