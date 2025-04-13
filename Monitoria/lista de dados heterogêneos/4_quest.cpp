#include <stdio.h>

typedef struct Conta
{
    int numConta;
    float saldo;
    char conta;
  } c;

int main() {
  c con;

  printf("Digite o número da conta: ");
  scanf("%d", &con.numConta);
  printf("Digite o saldo: ");
  scanf("%f", &con.saldo);
  printf("Digite o tipo de conta (P/C): ");
  scanf(" %c", &con.conta);

  if (con.conta == 'P' || con.conta == 'C') {
    printf("=-=-=-=-=- Detalhes --=-=-=-=\n");
    printf("Número da Conta: %d\n", con.numConta);
    printf("Saldo: %.2f\n", con.saldo);
    printf("Tipo de Conta: %c\n", con.conta);
} else {
    printf("Tipo de Conta inválido.\n");
}
}