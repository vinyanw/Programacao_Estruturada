#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vetor[20];
    int numeroAleatorio = 0;
    int somaElementos = 0;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        numeroAleatorio = rand() % 10 + 1;
        vetor[i] = numeroAleatorio;
        somaElementos += numeroAleatorio;
        printf("vetor[%d]: %d\n", i,  vetor[i]);
    }
    
    printf("soma dos elementos: %d", somaElementos);
    return 0;

}