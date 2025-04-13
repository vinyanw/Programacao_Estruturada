#include <stdio.h>
int main() {
int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        printf("%d + %d\n = ", soma, i);
        soma+=i;
        printf("| %d |\n", soma);
    }

    printf("a soma de 1 ate 100 eh: %d", soma);    
    return 0;
}