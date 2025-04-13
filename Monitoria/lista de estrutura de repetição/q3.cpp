#include <stdio.h>
int main(){
    int quantNum, num, maiorNum, repeticao; 
    repeticao = 0;

    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &quantNum);

    if (quantNum <= 0) {
        printf("Invalido\n");
        return 1; 
    }

    printf("Digite o número: ");
    scanf("%d", &num);
    maiorNum = num;
    repeticao = 1;

    for (int i = 1; i < quantNum; i++) {
        printf("\nDigite o número: ");
        scanf("%d", &num);

        if (num > maiorNum) {
            maiorNum = num;
            repeticao = 1;
        } else if (num == maiorNum) {
            repeticao++;
        }
    }

    printf("O maior número digitado foi: %d\n", maiorNum);
    printf("Ele foi lido %d vezes\n", repeticao);

    return 0;
}