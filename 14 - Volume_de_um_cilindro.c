/* Faça um algoritmo que calcule o volume de um cilindro. Considere π =
3,14. (Fórmula: π . r2 . h) */

#include <stdio.h>

int main(){
    float altura, raio, volume;

    printf("Infrome a altura do cilindro: ");
    scanf("%f", &altura);

    printf("\n");

    printf("Infrome o raio do cilindro: ");
    scanf("%f", &raio);

    printf("\n");

    volume = 3.14 * (raio * raio) * altura;

    printf("O volume do cilindro de altura %.2f e raio %.2f vale %.2f",altura, raio, volume);
    
    return 0;
}