//Sucessor e Antecessor: Receber um número e exibir seu sucessor e antecessor.

#include <stdio.h>

int main(){
    int num, suc, ant;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("/n");

    suc = num + 1;
    ant = num - 1;

    printf("O sucessor de %d e %d e o seu antecessor e %d.", num, suc, ant);

    return 0;
}