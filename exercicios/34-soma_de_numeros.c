/* Calcule a soma dos números pares de 1 a 20. */

#include <stdio.h>

int main(){
    int soma = 0;
    for(int i = 1; i < 21; i++){
        if (i % 2 == 0){
            soma += i;
        }
    }
    printf("A soma dos numeros pares entre 1 a 20 vale: %d", soma);
    return 0;
}