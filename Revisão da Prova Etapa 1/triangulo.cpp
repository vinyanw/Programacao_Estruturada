#include <stdio.h>
int main(){
    int l1, l2, l3;
    printf("Digite o lado A: ");
    scanf("%d", &l1);

    printf("Digite o lado B: ");
    scanf("%d", &l2);

    printf("Digite o lado C: ");
    scanf("%d", &l3);

    if (l1 > l2 && l1 > l3) {
        if ((l1 * l1) == (l2 * l2) + (l3 * l3)){
            printf("\n(%d^2 + %d^2) = %d^2 forma SIM um triangulo retangulo", l2,l3,l1);
        } else {
            printf("\n(%d^2 + %d^2) = %d^2 NAO formam um triangulo retangulo", l2,l3,l1);
        }
        }
    else if (l2 > l1 && l2 > l3) {
        if ((l2 * l2) == (l1 * l1) + (l3 * l3)){
            printf("\n(%d^2 + %d^2) = %d^2 forma SIM um triangulo retangulo", l1,l3,l2);
        } else {
            printf("\n(%d^2 + %d^2) = %d^2 NAO forma um triangulo retangulo", l1,l3,l2);
        }
        }
    else if (l3 > l1 && l3 > l1) {
        if ((l3 * l3) == (l1 * l1) + (l2 * l2)){
        printf("\n(%d^2 + %d^2) = %d^2 forma SIM um triangulo retangulo", l1,l2,l3);
        } else {
            printf("\n(%d^2 + %d^2) = %d^2 NAO forma um triangulo retangulo", l1,l2,l3);
        }
        }
return 0;
}
