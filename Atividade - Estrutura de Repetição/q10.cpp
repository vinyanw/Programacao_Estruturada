#include <stdio.h>
int main() {
    int num, fatoracao;
    fatoracao = 1;

    printf("digite um numero positivo e receba seu fatorial: ");
    scanf("%d", &num);

    for (int i = num; i > 1; i--)
    {
        fatoracao *= i;
    }
    printf("fatoracao: \n");
    printf("| o fatorial de %d eh = %d |\n", num, fatoracao);
    return 0;
}