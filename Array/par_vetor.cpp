#include <stdio.h>
int main(){

    int vetor[50];
    int par = 0;

    for (int i = 0; i < 50; i++)
    {
        vetor[i] = par;
        printf("vetor[%d]: %d\n", i,  vetor[i]);
        par += 2;
    }
    

return 0;
}