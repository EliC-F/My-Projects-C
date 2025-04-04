/* Faça um algoritmo para ler a temperatura atual e conforme leitura, imprimir o resultado de
acordo com a tabela abaixo. 
T < 15 = muito frio
16 <= T < 23 = frio
23 <= T < 26 = agradavel
26 <= T < 30 = quente
T > 30 = Muito quente */

#include <stdio.h>

int main(){
    int temp;

    printf("Informe a temperatura atual em Graus celsius: ");
    scanf("%d", &temp);

    if (temp < 15){
        printf("Muito frio.\n");
    }
    else if (temp >= 16  && temp < 23){
        printf("Frio.\n");
    }
    else if (temp >= 23 && temp < 26){
        printf("Agradavel.\n");
    }
    else if (temp >= 26 && temp < 30){
        printf("Quente.\n");
    }
    else{
        printf("Muito Quente.\n");
    }

    return 0;
}
