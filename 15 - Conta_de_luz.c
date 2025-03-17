/* Edson gostaria de saber o quanto de seu salário é destinado ao pagamento da conta de
energia elétrica. Sabendo que a tarifa é R$ 0,78 por kWh, faça um algoritmo que receba o
salário do Edson e seu consumo (em kWh), e imprima qual a porcentagem do salário do
Edson deve ser destinado para pagamento da conta de energia elétrica. */

#include <stdio.h>

int main(){
    float salario, consumo, porcentagem;

    printf("Informe seu salario: ");
    scanf("%f", &salario);
    
    printf("\n");
    
    printf("Informe o consumo em kwh mensal: ");
    scanf("%f", &consumo);

    printf("\n");

    porcentagem = ((consumo * 0.78) / salario) * 100;
    
    printf("A porcentagem do salario destinada a conta de energia e: %.2f%%\n", porcentagem);

    return 0;
}