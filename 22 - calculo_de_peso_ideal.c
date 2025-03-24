/* Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. */

#include <stdio.h>

int main(){
    char sexo;
    float altura;

    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    printf("\n");

    printf("Qual o seu sexo? Masculino (M) ou Feminino (F): ");
    scanf("%s", &sexo);

    printf("\n");

    if (sexo == 'm' || sexo == 'M'){
        float peso;

        peso = (72.7 * altura) - 58;

        printf("O seu peso ideial e: %.2fKg", peso);
    }

    else if (sexo == 'f' || sexo == 'F'){
        float peso;

        peso = (62.1 * altura) - 44.7;

        printf("O seu peso ideal e: %.2fKg", peso);
    }

    else{
        printf("O sexo infomado nao e valido!, reinicie o programa.");
    }

    return 0;
}