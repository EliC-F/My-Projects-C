/* Peça ao usuário um número e imprima a tabuada de multiplicação desse número de 1 a 10. */

#include <stdio.h>

int main(){
    int num;
    printf("Informe o numero: ");
    scanf("%d", &num);

    for(int i = 0; i < 11; i++){
        int tab = num * i;
        printf("%d * %d = %d\n", num, i, tab);
    }

}
