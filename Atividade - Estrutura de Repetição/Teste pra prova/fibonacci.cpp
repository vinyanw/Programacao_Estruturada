#include <stdio.h>
int main() {
    
    int numUm, numDois, numQuantidade, fibonacci;
    numUm = 0;
    numDois = 1;

    printf("digite a quantidade n de numeros da sequencia fibonacci: ");
    scanf("%d", &numQuantidade);

    do
    {
        printf(", %d", numUm);
        fibonacci = numUm + numDois; 
        numUm = numDois;
        numDois = fibonacci;
        numQuantidade --;
    } while (numQuantidade > 0);
    
    return 0;
}