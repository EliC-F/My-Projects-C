//Área de um Retângulo: Pedir a largura e o comprimento e calcular a área.

#include <stdio.h>

int main(){
    float l, c, a;

    printf("Digite o valor da largura: ");
    scanf("%f", &l);

    printf("\n");

    printf("Digite o valor do comprimento: ");
    scanf("%f", &c);

    printf("\n");

    a = l * c;

    printf("A area do retangulo de larura %.2f e comprimento %.2f e igual a: %.2f", l, c, a);
    

    return 0;
}