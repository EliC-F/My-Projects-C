//Cálculo da Média: Solicitar três notas e exibir a média aritmética.
#include <stdio.h>

int main() {
    

    float n1, n2, n3, m;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("\n");
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("\n");
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    printf("\n");
    
    m = (n1 + n2 + n3) / 3.0;
    
    printf("A media das notas E igual a: %.2f", m);

    return 0;
}
