#include <stdio.h>
int main(){
    float l1, l2, l3;

    printf("Digite o lado 01 do triangulo: ");
    scanf("%f",&l1);

    printf("Digite o lado 02 do triangulo: ");
    scanf("%f",&l2);

    printf("Digite o lado 03 do triangulo: ");
    scanf("%f",&l3);

    if ((l1 == l2) && (l2 == l3)){
        printf("Equilatero");
    } else if ((l1==l2) || (l2==l3) || (l3==l1)) {
        printf("Isosceles");
    } else {
        printf("Escaleno");
    }
}