#include <stdio.h>
int main(){
    float altura;
    int sexo;
    float pesoIdeal; 

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("Digite seu sexo entre 1 e 2 (masculino e feminino, respectivamente): ");
    scanf("%d",&sexo);

    switch (sexo)
    {
    case 1:
        pesoIdeal = ((72.7 * altura) - 58);
        printf("peso ideal: %0.2fKG", pesoIdeal);
        break;
    
    case 2:
        pesoIdeal = ((62.1 * altura) - 44.7);
        printf("peso ideal: %0.2fKG", pesoIdeal);
        break;
    
    default:
    printf("numero invalido\n");
        break;
    }
}