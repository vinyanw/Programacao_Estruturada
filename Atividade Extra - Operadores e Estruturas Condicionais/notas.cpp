#include <stdio.h>
int main(){

    float n1, n2; // notas
    float media;

    printf("Digite sua nota 01: ");
    scanf("%f",&n1);

    printf("Digite sua nota 02: ");
    scanf("%f",&n2);

    media = (n1+n2)/2;

    if (media>10) {
        printf("acho que não tem como um aluno tirar uma nota maior que 10");
        printf("programa finalizado");
        return 0;
    }

    if ((media>0) && (media<4))  {
        printf("reprovado!");
    } else if ((media >= 4) && (media < 7)) {
        printf("recuperacao!");
    } else {
        printf("aprovado!");
    }
    return 0;
}