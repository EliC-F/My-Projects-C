/* Desenvolver um algoritmo que leia a altura de 10 pessoas. Este programa deverá calcular
e mostrar :
● A menor altura do grupo;
● A maior altura do grupo; */

#include <stdio.h>

int main(){
    float altura, maior = 0, menor = 3;
    
    for (int i = 1; i < 11; i++){
        printf("Informe a altura da pessoa %d: ", i);
        scanf("%f", &altura);
        
        if(altura > maior){
            maior = altura;
        }
        if(altura < menor){
            menor = altura;
        }
    }
    printf("A maior altura do grupo: %.2f\nA menor altura do grupo: %.2f", maior, menor);
}
