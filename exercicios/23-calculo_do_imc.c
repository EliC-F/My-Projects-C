/* O IMC – Índice de Massa Corporal é um critério da Organização Mundial de
Saúde para dar uma indicação sobre a condição de peso de uma pessoa
adulta.
A fórmula é IMC = peso /( altura 2).
Elabore um algoritmo que leia o peso e a altura de um adulto e mostre
sua condição de acordo com a tabela abaixo.

Condição
● Abaixo de 18,5 = Abaixo do peso
● Entre 18,5 e 25 = Peso normal
● Entre 25 e 30 = Acima do peso
● Acima de 30 = obeso */

#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("\n");

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("\n");

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f", imc);

    printf("\n");

    if (imc < 18.5){
        printf("Abaixo do peso");
    }

    else if (imc >= 18.5 && imc < 25){
        printf("Peso normal");
    }

    else if (imc >= 25 && imc < 30){
        printf("Acima do peso");
    }

    else{
        printf("Obeso");
    }
    
    return 0;
}
