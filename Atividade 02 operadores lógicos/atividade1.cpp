#include <math.h>
#include <stdio.h>
int main(){

    float n1,  n2;
    float c1, c2, c3, c4, c5, c6;

    printf("Digite o número 01: ");
    scanf("%f",&n1);

    printf("Digite o número 02: ");
    scanf("%f",&n2);

    c1 = n1+n2;
    c2 = n1*(pow(n2,2));
    c3 = pow(n1,2);
    c4 = sqrt(c3 + (pow(n2,2)));
    c5 = sin(n1-n2);
    c6 = abs(n1);

    printf("A soma dos numeros: %f", c1);
    printf("O produto do primeiro numero pelo quadrado do segundo: %f", c2);
    printf("O quadrado do primeiro numero: %f", c3);
    printf("A raiz quadrada da soma dos quadrados: %f", c4);
    printf("O seno da diferenca do primeiro numero pelo segundo: %f", c5);
    printf("O modulo do primeiro numero: %f", c6);
}