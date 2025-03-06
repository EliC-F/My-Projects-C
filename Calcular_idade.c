//Calcular a Idade: Pedir o ano de nascimento do usuário e calcular sua idade atual.

#include <stdio.h> 

int main(){
    int ano, idade;
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano);

    idade = 2025 - ano;

    printf("\n");

    printf("Em 2025 voce fara %d anos", idade);

    return 0;
}