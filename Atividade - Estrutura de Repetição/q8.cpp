#include <stdio.h> 
int main() {
    int num;
    float soma;
    float media;

    soma = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o numero (%d): \n", i);
        scanf("%d", &num);
        soma += num;
    }   
    media = soma/10; 
    printf("A media dos 10 numeros eh de %.2f\n", media);

    return 0;
}