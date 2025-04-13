#include <stdio.h>
int main(){

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 60) {
        printf("prioridade");
    } else {
        printf("normal");
    }

}