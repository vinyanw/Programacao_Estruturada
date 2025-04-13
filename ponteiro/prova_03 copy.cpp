#include <stdio.h>
#include <string.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  char nome[30];
  char cpf[12];  // armazena apenas numeros (sem . e -)
  char sexo;     // utilizar M para masculino e F para Feminino
  Data nascimento;
} Pessoa;

void adicionar(Pessoa *pessoas, int *posicao) {
  printf("Digite o nome da pessoa: ");
  scanf("%s", pessoas[*posicao].nome);

  printf("Digite o CPF: ");
  scanf("%s", pessoas[*posicao].cpf);

  printf("Digite o Sexo: ");
  scanf(" %c", &pessoas[*posicao].sexo);

  printf("Digite a data de nascimento (dd/mm/aaaa): ");
  scanf("%d/%d/%d", &pessoas[*posicao].nascimento.dia,
        &pessoas[*posicao].nascimento.mes, &pessoas[*posicao].nascimento.ano);

  (*posicao)++;
}

void imprimir(Pessoa *pessoas, int *total) {
  printf("\nIMPRIMINDO\n");
  for (int i = 0; i < *total; i++) {
    printf("Nome: %s\n", pessoas[i].nome);
    printf("CPF: %s\n", pessoas[i].cpf);
    printf("Sexo: %c\n", pessoas[i].sexo);
    printf("Data de nascimento: %d/%d/%d\n", pessoas[i].nascimento.dia,
           pessoas[i].nascimento.mes, pessoas[i].nascimento.ano);
    printf("\n");
  }
}

int main() {
  Pessoa pessoas[5];
  int quantidade = 0;
  adicionar(pessoas, &quantidade);
  adicionar(pessoas, &quantidade);
  imprimir(pessoas, &quantidade);
}