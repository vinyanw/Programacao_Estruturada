#include <stdio.h>
int main(){
    int num, numSequencia;
    int n1, n2;
    n1 = 0;
    n2 = 1;
    
    printf("\nDigite o numero para estabelecer o limite do fibonacci: ");
    scanf("%d",&num);
    
    while (n1 < num) {
    numSequencia = n1 + n2;
    n1 = n2;
    n2 = numSequencia;
     
        printf("Sequencia Fibonacci\n");
        printf("%d \n", n2);
    }

return 0;
}