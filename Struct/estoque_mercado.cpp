#include <stdio.h>
#include <string.h>

typedef struct {
  int dia;
  int mes;
  int ano;
} data;

typedef struct {
  char nome[30];
  int qnt;
  float preco;
  data validade;
} produto;

produto produtos[100];
int posicao = 0;

bool validade_passou(data hoje, data validade) {
  if (hoje.ano * 365 + hoje.mes * 30 + hoje.dia >
      validade.ano * 365 + validade.mes * 30 + validade.dia) {
    return true;
  } else {
    return false;
  }
}

void inserir_produto() {
  if (posicao >= 100) {
    printf("Banco de dados cheio.\n");
    return;
  }
  printf("Digite o nome do produto: ");
  scanf("%s", produtos[posicao].nome);
  printf("Digite a quantidade do produto: ");
  scanf("%d", &produtos[posicao].qnt);
  printf("Digite o preço do produto: ");
  scanf("%f", &produtos[posicao].preco);
  printf("Digite a validade do produto (dd/mm/aaaa): ");
  scanf("%d/%d/%d", &produtos[posicao].validade.dia,
        &produtos[posicao].validade.mes, &produtos[posicao].validade.ano);
  posicao++;
}

int buscar(char nome[]) {
  for (int i = 0; i < posicao; i++) {
    if (strcmp(nome, produtos[i].nome) == 0) {
      return i;
    }
  }
  return -1;
}

void remover(char nome[]) {
  int i = buscar(nome);
  if (i >= 0) {
    if (i != posicao - 1) {
      for (int j = i; j < posicao - 1; j++) {
        produtos[j] = produtos[j + 1];
      }
    }
    posicao--;
  } else {
    printf("Produto não encontrado\n");
  }
}

void imprimir(char nome[]) {
  int pos = buscar(nome);
  if (pos >= 0  ) {
    printf("Nome: %s\n", produtos[pos].nome);
    printf("Quantidade: %d\n", produtos[pos].qnt);
    printf("Preço: R$ %.2f\n", produtos[pos].preco);
    printf("Validade: %d/%d/%d\n", produtos[pos].validade.dia,
           produtos[pos].validade.mes, produtos[pos].validade.ano);
  } else {
    printf("Produto não encontrado\n");
  }
}

void vender(char nome[], int quantidade) {
  data hoje;
  hoje.dia = 16;
  hoje.mes = 8;
  hoje.ano = 2024;
  int i = buscar(nome);
  if (i >= 0) {
    if (quantidade <= produtos[i].qnt) {
      if (!validade_passou(hoje, produtos[i].validade)) {
        printf("Total da venda: R$ %.2f\n", quantidade * produtos[i].preco);
        produtos[i].qnt -=
            quantidade;  // produtos[i].qnt = produtos[i].qnt - quantidade;
        return;
      } else {
        printf("Produto vencido\n");
        return;
      }
    } else {
      printf("Quantidade insuficiente\n");
      return;
    }

  } else {
    printf("Produto não encontrado\n");
  }
}

float calcular_total() {
  float total = 0;
  for (int i = 0; i < posicao; i++) {
    total += produtos[i].preco * produtos[i].qnt;
  }
  return total;
}

int menu() {
  int opc;
  printf("\n\n======= MENU =======\n");
  printf("1 - Inserir produto\n");
  printf("2 - Buscar produto\n");
  printf("3 - Vender produto\n");
  printf("4 - Total no estoque\n");
  printf("5 - Remover\n");
  printf("0 - Sair\n");
  printf("\nDigite a opção: ");
  scanf("%d", &opc);
  return opc;
}

int main(int argc, char const *argv[]) {
  char nome[30];
  float total = 0;
  int opc = -1;
  while (opc != 0) {
    opc = menu();

    switch (opc) {
      case 1:
        inserir_produto();
        break;

      case 2:
        printf("Digite o nome do produto: ");
        scanf("%s", nome);
        imprimir(nome);
        break;

      case 3:
        int qunt;
        printf("Digite o nome do produto: ");
        scanf("%s", nome);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &qunt);
        vender(nome, qunt);
        break;

      case 4:
        total = calcular_total();
        printf("O total no estoque é R$ %.2f\n", total);
        break;

      case 5:
        printf("Digite o nome do produto: ");
        scanf("%s", nome);
        remover(nome);
        break;

      case 0:
        printf("Até mais\n");
        break;

      default:
        printf("Opção inválida\n");
        break;
    }
  }

  return 0;
}
