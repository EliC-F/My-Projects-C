/* Conversão de Temperatura: Pedir uma temperatura em Celsius e converter para
Fahrenheit. */ 

#include <stdio.h> 

int main(){
    float c, f;
    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &c);

    printf("\n");

    f = (c * 1.8) + 32;

    printf("A conversao de %.2f °C graus celsius para graus fahrenheit é igual a %.2f °F", c, f);

    return 0;
}
