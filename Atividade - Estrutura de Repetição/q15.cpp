#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto;
    int num;
    srand(time(NULL));

    numeroSecreto = rand() % 100 + 1;

    printf("digite um numero entre 1 e 100: ");
    scanf("%d", &num);

    while (num != numeroSecreto) 
    {
        if (num < 1 || num > 100) 
        {
            printf("numero invalidoo ");
            return 0;
        } else if (num < numeroSecreto) {
            printf("numero eh maior\n");
            printf("tente novamente: \n");
            scanf("%d", &num);
        } else {
            printf("numero eh menor\n");
            printf("tente novamente: \n");
            scanf("%d", &num);
        }

    }

    printf("Você acertou o numero secreto! era %d \n", numeroSecreto);
    return 0;
} 