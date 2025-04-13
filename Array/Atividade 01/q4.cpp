#include <stdio.h>
int main()
{
    int vetor[5];
    int proximo = 1;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        if (vetor[i] > vetor[proximo])
        {
            printf("ta errado, n eh crescente");
            return 0;
        }
        proximo++;
    }

    printf("crescente, tchau");
    return 0;
}