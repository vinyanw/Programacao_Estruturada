#include <stdio.h>
int main() {
    int num;
    int maior, menor;
    maior = 0;
    menor = 100000000;

    for (int i = 1; i <= 10; i++)
    {
        printf("digite o numero (%d)\n", i);
        scanf("%d", &num);

        if (menor>num) 
        {
            menor = num;
        }
        if (maior<num)
        {
            maior = num;
        }
    }
    
    printf("maior numero = %d\n", maior);
    printf("menor número = %d\n", menor);
    
    return 0;
}