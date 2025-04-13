#include <stdio.h>
int main(){

    int hora, minuto;

    printf("Digite sua hora em numero inteiro: ");
    scanf("%d",&hora);

    printf("Digite seu(s) minuto(s) em numero inteiro: ");
    scanf("%d",&minuto);

    if ((hora >= 0) && (hora < 24) && (minuto >= 0) && (minuto < 60)){
            printf("o horario digitado foi: (%d:%d)", hora, minuto);
        } else {
            printf("\nvalor invalido");
            printf("\nprograma finalizado");
        }
    return 0;
}