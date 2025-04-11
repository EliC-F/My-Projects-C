//Escreva um algoritmo que leia um valor em metros e o exiba convertido em milímetros.

#include <stdio.h>

int main(){
    float metro, milimetro;
    printf("Informe o valor da medida em metros: ");
    scanf("%f", &metro);

    printf("\n");

    milimetro = metro * 1000;

    printf("A medida informada foi %.2fm, convertendo para milimetro fica %.2fmm.", metro, milimetro);
    return 0;
}
