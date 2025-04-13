#include <stdio.h>

typedef struct Pessoa
{
    char cpf[11];
    int idade;
    float peso;
  } ps;

int main() {
  ps ps1;

  printf("Digite o CPF: ");
  scanf("%s", ps1.cpf);
  printf("Digite a idade: ");
  scanf("%d", &ps1.idade);
  printf("Digite o peso: ");
  scanf("%f", &ps1.peso);

  printf("----------1----------\n");
  printf("CPF: %s\n", ps1.cpf);
  printf("Idade: %d\n", ps1.idade);
  printf("Peso: %d\n", ps1.peso);
  return 0;
}