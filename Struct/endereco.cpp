#include <stdio.h>
#include <string.h>

typedef struct {
  int numero;
  char bairro[20];
  char rua[20];
  char cep[10];
} Endereco;

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  char nome[50];
  char cpf[12];
  char telefone[12];
  Data nascimento;
  Endereco endereco;
} Cliente;

int main() {
  Data hoje;
  hoje.dia = 9;
  hoje.mes = 8;
  hoje.ano = 2024;

  Cliente clientes[5];
  for (int i = 0; i < 5; i++) {
    printf("Digite o nome: ");
    scanf("%s", clientes[i].nome);
    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &clientes[i].nascimento.dia, &clientes[i].nascimento.mes,
          &clientes[i].nascimento.ano);
    printf("Digite o bairro: ");
    scanf("%s", clientes[i].endereco.bairro);
  }

  char bairroCentro[] = "Centro";

  printf("apenas os maiores de idade sao: \n");
  for (int i = 0; i < 5; i++) {
    int idade = hoje.ano - clientes[i].nascimento.ano;
    if (hoje.mes * 30 + hoje.dia <
        clientes[i].nascimento.mes * 30 + clientes[i].nascimento.dia) {
      idade = idade - 1;
    }
    if (idade >= 18)
    {
        printf("%s, com %d anos\n", clientes[i].nome, idade);
    }
  }

  printf("Clientes que moram no %s:\n", bairroCentro);
  for (int i = 0; i < 5; i++) {
    if (strcmp(clientes[i].endereco.bairro, "Centro") == 0) {
      printf("%s\n", clientes[i].nome);
    }
  }
}
