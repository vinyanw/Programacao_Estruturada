#include <stdio.h>
int main(){

    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = 0;
        printf("vetor[%d]: %d\n", i,  vetor[i]);

    }
    
    return 0;
}