#include <stdio.h>
int main() {

    int vetor[10];
    int somaPares = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite no vetor [%d]: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            somaPares += 1;
        }
        
    }
    printf("Quantidade de pares: %d", somaPares);
}