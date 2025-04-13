#include <stdio.h>
#include <stdlib.h>

void troca_copia(int a, int b) {
    int c = a;
    a = b;
    b = c;
}

void troca_ponteiro(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}   

int main(int argc, char const *argv[])
{
    int x = 3;
    int y = 2;

    printf("x = %d e y = %d\n", x, y);
    troca_ponteiro(&x,&y);
    printf("x = %d e y = %d\n", x, y);
    int *ptr = &y;
    
    printf("Valor %d\n",*ptr);
    return 0;
}
