#include <stdio.h>
#include <math.h>
int main(){
    float raio;
    float diametro, perimetro, area;
    float pi;
    pi = 3.1415;

    printf("Digite seu raio: ");
    scanf("%f",&raio);

    diametro = (raio * 2);
    perimetro = (2*pi) * (raio);
    area = (pi)*pow(raio,2);

    printf("\ndiametro: %f",diametro);
    printf("\nperimetro: %f",perimetro);
    printf("\narea: %f",area);

    return 0;
}