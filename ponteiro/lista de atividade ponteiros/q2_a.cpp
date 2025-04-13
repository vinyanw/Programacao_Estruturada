#include <stdio.h>
#include <stdlib.h>

int main() { // trocando "void main" para "int main"
    int x, *p;
    x = 100;
    p = &x; // direcionando ao endereço de x
    printf("Valor de p: %d.\n", *p);
}