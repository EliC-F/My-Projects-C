/* João comprou um cofrinho e resolveu juntar moedas para economizar. Crie um algoritmo
que calcule o valor, em reais, economizado. Considere a existência das seguintes moedas: 5,
10, 25, 50 centavos e 1 real. */

#include <stdio.h>

int main(){
    float m_5, m_10, m_25, m_50, m_1, soma;

    printf("Informe quantas moedas de 5 centavos voce guardou: ");
    scanf("%f", &m_5);

    printf("\n");
    
    printf("Informe quantas moedas de 10 centavos voce guardou: ");
    scanf("%f", &m_10);

    printf("\n");
    
    printf("Informe quantas moedas de 25 centavos voce guardou: ");
    scanf("%f", &m_25);

    printf("\n");
    
    printf("Informe quantas moedas de 50 centavos voce guardou: ");
    scanf("%f", &m_50);

    printf("\n");

    printf("Informe quantas moedas de 1 real voce guardou: ");
    scanf("%f", &m_1);

    printf("\n");

    soma = (m_5 * 0.05) + (m_10 * 0.10) + (m_25 * 0.25) + (m_50 * 0.50) + (m_1 * 1.0);

    printf("O total guarado e de R$%.2f", soma);

    return 0;
}
