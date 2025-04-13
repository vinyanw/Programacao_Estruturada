#include <stdio.h>
int main(){

    char opcao;
    int quantidade;
    float preco, precoTotal; 

    printf("\nlista de comidas: ");
    printf("\n1 - pão");
    printf("\n2 - bolo");
    printf("\n3 - croissant");
    printf("\ndigite sua opção:");
    scanf ("%s",&opcao);
    printf("\ndigite sua quantidade desse produto:");
    scanf("%f",&quantidade);

    switch (opcao)
    {
    case 'pão':
        preco = preco;
    case 'bolo':
        preco = (preco - (preco * 0.1));
    case 'croissant':
        preco = (preco - (preco * 0.15));    
    default:
        printf("não tem opcao pra isso");
        break;
    }

    precoTotal = preco * quantidade;

    printf("valor total da compra: %f", precoTotal);

}