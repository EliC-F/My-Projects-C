/* Sabendo que 1 GB equivale a 1024 MB, faça um algoritmo que dado um valor em
GB, imprima o seu valor em MB. */

#include <stdio.h>

int main(){
    int gb, mb;

    printf("Quantos Giga bites voce quer converter?: ");
    scanf("%d", &gb);

    printf("\n");

    mb = gb * 1024;

    printf("%dGB e igual a %dMB", gb, mb);

    return 0;
}