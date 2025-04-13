#include <stdio.h>
#include <stdlib.h>

void troca (int *i, int *j) {
int temp; // tirar o * da variavel temp
temp = *i; // tirar o * da variavel temp
*i = *j;
*j = temp; // tirar o * da variavel temp
}

int main() {
    int x, y;
    x = 5;
    y = 9;
    printf("x = %d e y = %d\n", x, y);
    troca(&x,&y);
    printf("x = %d e y = %d\n", x, y);
}