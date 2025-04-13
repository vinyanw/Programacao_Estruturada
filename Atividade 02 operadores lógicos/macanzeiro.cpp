#include <stdio.h>
int main(){

    int quantMacas;
    float valor;
    printf("Digite a quantidade de macas: ");
    scanf("%d",&quantMacas);

    if (quantMacas < 12){
        valor = (quantMacas*0.30);
        printf("valor: %0.2fR$",valor);
    } else {
        valor = (quantMacas*0.25);
        printf("valor: %0.2fR$",valor);
    }
}