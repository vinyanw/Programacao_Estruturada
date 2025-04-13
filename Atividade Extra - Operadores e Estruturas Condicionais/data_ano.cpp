#include <stdio.h>
int main(){
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d",&dia);

    printf("Digite o mes: ");
    scanf("%d",&mes);

    printf("Digite o ano: ");
    scanf("%d",&ano);

    if ((mes < 1) || (mes > 12)) {
        printf("\nvalor de mes invalido");
        printf("\nprograma finalizado");
        return 0;
    }

    if ((dia < 1) || (dia > 31)) {
        printf("\nvalor de dia invalido");
        printf("\nprograma finalizado");
        return 0;
    }
    
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
      if (dia > 30) {
      printf("\ndia invalido! lembre-se de colocar o número 1 e 30 nesse mes", mes);
      printf("\nfinalizar programa");
      return 0;
      }
    } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
      if (dia > 31) {
      printf("\ndia invalido! lembre-se de colocar o número 1 e 31 nesse mes", mes);
      printf("\nfinalizar programa");
      return 0;
    }
    } else if (mes == 2) {
      if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
      // Ano bissexto, fevereiro com 29 dias
      if (dia > 29) {
        printf("\ndia inválido! lembre-se que ano bissexto fev tem dias entre 1 e 29");
        return 0;
      }
    } else {
      // Ano normal, fevereiro com 28 dias
      if (dia > 28) {
        printf("\ndia inválido! lembre-se que fev tem dias entre 1 e 28");
        return 0;
      }
    }
} 

  printf("\na data (%d/%d/%d) eh veridica!", dia, mes, ano);
  return 0;
}