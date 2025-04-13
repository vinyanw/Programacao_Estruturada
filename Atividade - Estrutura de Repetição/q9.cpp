#include <stdio.h>
#include <math.h>
int main() {
    int num, expoente, potenciacao;
    potenciacao = 1;
    
    printf("Digite seu numero: ");
    scanf("%d", &num);

    printf("Digite seu expoente: ");
    scanf("%d", &expoente);
    
    for (int i = 0; i < expoente; i++)
    {
        potenciacao *= num; 
    }
    printf("potencia: \n");
    printf("| %d^%d = %d |\n", num, expoente, potenciacao);
    return 0;
}