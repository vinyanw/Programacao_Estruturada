#include <stdio.h>
int main() {
int i = 3;
int soma = 1;
    while (i <= 100) {
        printf("%d (num) + %d (impar) = \n", soma, i);
        soma+=i;
        printf("| %d |\n", soma);
        i+=2;
    }
    return 0;
}