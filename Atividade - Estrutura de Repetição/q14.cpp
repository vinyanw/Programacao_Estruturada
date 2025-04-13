#include <stdio.h>
int main() {
int num;
int pares, impares;
pares = 0;
impares = 0;
int i = 1;

    while ()
    {
        printf("digite um número: ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("fim do programa");
            printf("quantidade de pares: %d\n", pares);
            printf("quantidade de impares: %d\n", impares);
            return 0;
        }
        

        if (num % 2 == 0)
        {
            pares++;
        } else {
            impares++;
        }

        i++;
    }
    return 0;
}