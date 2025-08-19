/* 7. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através
de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
codificação:
● 1, 2, 3, 4 = voto para os respectivos candidatos;
● 5 = voto nulo;
● 6 = voto em branco;
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
● total de votos para cada candidato;
● total de votos nulos;
● total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0. */

#include <stdio.h>

int main(){
    int voto, qtd, c1, c2, c3, c4, n, b;
    printf("Informe a qunatidade de votos: ");
    scanf("%d", &qtd);
    
    for (int i = 0; i < qtd; i++){
        printf("Qual o numero do seu voto?: ");
        scanf("%d", &voto);
        if (voto == 1){
            c1 =+ 1;
        }
        
        if (voto == 2){
            c2 =+ 1;
        }
        
        if (voto == 3){
            c3 =+ 1;
        }
        
        if (voto == 4){
            c4 =+ 1;
        }
        
        if (voto == 5){
            n =+ 1;
        }
        
        if (voto == 6){
            b =+ 1;
        }
    }
    
    printf("\n----Total de votos---- \nCandidato 1: %d \nCandidato 2: %d \nCandidato 3: %d \nCandidato 4: %d \nVotos nulo: %d \nVotos Branco: %d", c1, c2, c3, c4, n, b);
    return 0;
}
