/* Sabendo que 1 GB equivale a 1024 MB, faça um algoritmo que dado um valor em
GB, imprima o seu valor em MB. */

#include <stdio.h>

int main(){
    int gb, mb;

     printf("Informe a quantidade de GB que deseja converter para MB: ");
    scanf("%d", &gb);

    printf("\n");

    mb = gb * 1024;

    printf("%dGb e igual a %dMb", gb, mb);

    return 0;
}
