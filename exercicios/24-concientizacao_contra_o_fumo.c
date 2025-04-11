/* Escreva um algoritmo para calcular a redução do tempo de vida de um fumante. Pergunte
a quantidade de cigarros fumados por dia e quantos anos ele já fumou. Considere que um
fumante perde 7 minutos de vida a cada cigarro, calcule quantos dias de vida um fumante
perderá. Exiba o total em dias. */

#include <stdio.h> 

int main(){
    int c_dia, ano, dias_p;

    printf("Quantos cigarros por dia voce fuma, aproximadamente? (Exemplo: caso seja 2.5 arredonde para 3): ");
    scanf("%d", &c_dia);

    printf("\n");

    printf("Faz quantos anos que voce ja fuma, aproximadamente? (Exemplo: caso seja 1 ano e 2 meses, digite 1 ano): ");
    scanf("%d", &ano);

    printf("\n");

    dias_p = ((c_dia * 7) * (ano * 365)) / 1440;

    if (dias_p == 1){
        printf("Infelizmente voce perdeu aproximadamente %d dia de vida, devido ao habito de fumar! ", dias_p);
    }

    else{
        printf("Infelizmente voce perdeu aproximadamente %d dias de vida, devido ao habito de fumar! ", dias_p);
    }

    return 0;
}
