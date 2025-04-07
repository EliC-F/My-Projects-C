/* 6. Escreva um algoritmo que leia o código de um aluno (somente números), as 3 notas obtidas por ele em
uma disciplina e a média dos exercícios que fazem parte da avaliação, e calcule a média de
aproveitamento, usando a fórmula:

MA := (nota1 + nota2 * 2 + nota3 * 3 + ME)/7

A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno, suas
notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e a mensagem
'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E.

Médida de      | 
Aproveitamento | Conceito
> = 90         | A
>= 75 e < 90   | B
>=60 e <75     | C
>=40 e < 60    | D
< 40           | E  
*/
   
#include <stdio.h>

int main(){
    float me, ma, notas[3];
    int num_a;

    printf("Digite o codigo do aluno: ");
    scanf("%d", &num_a);

    printf("\n");

    printf("Qual foi a media de exercicios avaliativos: ");
    scanf("%f", &me);

    printf("\n");

    for (int i = 0; i < 3; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    ma = (notas[0] + (notas[1] * 2) + (notas[2] * 3) + me)/7;

    printf("\n");

    printf("----Infromações do aluno----\n");
    printf("Numero do aluno: %d\n", num_a);
    printf("Suas notas\n NOTA 1: %.2f\nNOTA 2: %.2f\nNOTA 3: %.2f\n", notas[0], notas[1], notas[2]);
    printf("Media dos exercicios: %.2f\n", me);
    printf("Media de aproveitamento: %.2f\n", ma);

    if (ma >= 90){
        printf("Conceito: A\nAprovado!\n");
    }
    else if (ma >= 75){
        printf("Conceito: B\nAprovado!\n");
    }
    else if (ma >= 60){
        printf("Conceito: C\nAprovado!\n");
    }
    else if (ma >= 40){
        printf("Conceito: D\nReprovado!\n");
    }
    else{
        printf("Conceito: E\nReprovado!\n");
    }

    return 0;
}
