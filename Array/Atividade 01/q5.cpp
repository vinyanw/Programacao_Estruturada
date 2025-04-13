#include <stdio.h>
int main() {

    int vetor[5];
    int somaZero, somaUm;
    somaZero = 0;
    somaUm = 0;


    for (int i = 0; i < 5; i++)
    {
        printf("Digite numeros 1 ou 0: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] == 0)
        {
            somaZero += 1;
        }

        if (vetor[i] == 1)
        {
            somaUm += 1;
        }
        
        if (vetor[i] != 0 && vetor[i] != 1)
        {
            printf("digite apenas 1 ou 0\n");
            printf("programa finalizado\n");
            return 0;
        }
                
    }
    
    printf("soma de zero: %d\n", somaZero);
    printf("soma de um: %d\n", somaUm);



    return 0;
}