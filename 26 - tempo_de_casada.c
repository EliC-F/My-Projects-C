/* Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja “F” e estado
civil seja "CASADA", solicitar o tempo de casada (anos). */

#include <stdio.h>

int main(){
    char nome[50], sexo, estado_c;
    
    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("\n");

    printf("Informe o seu sexo, Masculino (M) ou Feminino (F): ");
    scanf(" %c", &sexo);

    printf("\n");

    printf("Informe o seu estado civil: Solteiro (S), Casado (C) ou Divorciado (D): ");
    scanf(" %c", &estado_c);

    printf("\n");

    if (sexo == 'f' || sexo == 'F'){
        if (estado_c == 'c' || estado_c == 'C'){
        int ano_c;
        printf("Infrome qunatos anos de casada voce tem: ");
        scanf("%d", &ano_c);
        printf("\nVoce esta casada ha %d anos.", ano_c);
        }
    }

    return 0;
}