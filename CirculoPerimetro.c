// Perímetro de um Círculo: Receber o raio de um círculo e calcular o perímetro. 

#include <stdio.h>

int main(){
    float r, p;

    printf("Informe o raio do circulo: ");
    scanf("%f", &r);

    printf("\n");

    p = 2 * 3.14 * r;

    printf("O perimetro de um circulo com raio %.2f, vale:  %.2f", r, p);

    return 0;
}