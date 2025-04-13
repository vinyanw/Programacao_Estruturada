#include <stdio.h>
int main(){
    int soma = 0;
    int num = 0;
    
    do
    {    
        printf("digite numeros inteiros para ter a soma deles (digite num negativo para sair): ");
        scanf("%d", &num);

        if (num >= 0)
        {
            soma += num;
        } else {
            printf("programa finalizado");
            printf("a soma dos digitados eh de %d", soma);
            return 0;
        }        
    } while (num >= 0);
    
    return 0;
}