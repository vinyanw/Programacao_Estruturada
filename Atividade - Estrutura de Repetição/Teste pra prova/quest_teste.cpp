#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("digite um numero: ");
    scanf("%d", &num);

    int numArmazenamento = num;
    while (numArmazenamento != 0) {
        soma += numArmazenamento % 10;
        numArmazenamento /= 10;
    }

    printf("a soma de %d é: %d.\n", num, soma);

    return 0;
}