#include <stdio.h>
#define MEDICAO 10
int main(){
float pesos[MEDICAO];
int i = 0;

    while (i < MEDICAO) {
        printf("Digite os peso %d: ",i + 1);
        scanf("%f",&pesos[i]);
        i = i + 1;
    }

    i = MEDICAO - 1;
    printf("pesos: ");

    while (i <= MEDICAO && i >= 0) {
        printf("| peso: %f|", pesos[i]);
        i = i - 1;
    }

return 0;
}