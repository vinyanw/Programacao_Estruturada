#include <stdio.h>

int main()
{
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor no vetor [%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                int variavel = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = variavel;
            }
        }
    }

    printf("Vetor em ordem crescente: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}