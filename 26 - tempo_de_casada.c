/* Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja “F” e estado
civil seja "CASADA", solicitar o tempo de casada (anos). */

#include <stdio.h>
#include <string.h>

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

    if ((sexo == 'F' || sexo == 'f') && (strcmp(estado_c, "Casada") == 0 || strcmp(estado_c, "casada") == 0)){
        int ano_c;
        printf("Informe quantos anos de casada voce tem: ");
        scanf("%d", &ano_c);
        printf("Voce esta casada ha %d anos.\n", ano_c);
        }

    return 0;
}