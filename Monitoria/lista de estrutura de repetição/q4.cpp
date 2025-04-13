#include <stdio.h>
int main(){
    int num, digito_centena, digito_dezena, digito_unidade;
    int numero_digitos = 1;

  printf("\nDigite um número inteiro entre 100 e 999: ");
  scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("\nNúmero inválido!");
        return 1;
    }

    for (int i = 0; i < numero_digitos; i++) {
    digito_centena = num / 100;
    num %= 100;
    digito_dezena = num / 10;
    num %= 10;
    digito_unidade = num;
    printf("\nCentena: %d", digito_centena);
    printf("\nDezena: %d", digito_dezena);
    printf("\nUnidade: %d", digito_unidade);
    }

  return 0;
}