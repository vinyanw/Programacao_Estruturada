#include <stdio.h>

typedef struct Aluno
{
    int idade;
    char matricula[5];
    float peso;
  } al;

int main() {
  al al1;

  printf("Digite a idade: ");
  scanf("%d", &al1.idade);
  printf("Digite o número da matrícula: ");
  scanf("%s", al1.matricula);
  printf("Digite a nota: ");
  scanf("%f", &al1.peso);

  printf("----------1----------\n");
  printf("Idade: %d\n", al1.idade);
  printf("Matrícula: %s\n", al1.matricula);
  printf("Nota: %f\n", al1.peso);
  return 0;
}