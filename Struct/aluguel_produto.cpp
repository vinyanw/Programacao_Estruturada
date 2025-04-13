#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int disponivel;
} Produto;

Produto inventario[50] = { {"Martelo", 5}, {"Serra", 3}, {"Furadeira", 4} };
int num_produtos = 3;

void alugar_produto() {
    char nome[30];
    printf("Digite o nome do produto para alugar: ");
    scanf("%s", nome);
    for (int i = 0; i < num_produtos; i++) {
        if (strcmp(inventario[i].nome, nome) == 0 && inventario[i].disponivel > 0) {
            inventario[i].disponivel--;
            printf("Produto '%s' alugado com sucesso!\n", nome);
            return;
        }
    }
    printf("Produto não disponível para aluguel!\n");
}

void devolver_produto() {
    char nome[30];
    printf("Digite o nome do produto para devolver: ");
    scanf("%s", nome);
    for (int i = 0; i < num_produtos; i++) {
        if (strcmp(inventario[i].nome, nome) == 0) {
            inventario[i].disponivel++;
            printf("Produto '%s' devolvido com sucesso!\n", nome);
            return;
        }
    }
    printf("Produto não encontrado no inventário!\n");
}

void listar_inventario() {
    printf("\n=== Inventário ===\n");
    for (int i = 0; i < num_produtos; i++) {
        printf("Produto: %s, Disponível: %d\n", inventario[i].nome, inventario[i].disponivel);
    }
}

int menu() {
    int opc;
    printf("\n=== Menu de Aluguel ===\n");
    printf("1 - Alugar produto\n");
    printf("2 - Devolver produto\n");
    printf("3 - Listar inventário\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opc);
    return opc;
}

int main() {
    int opc = -1;
    while (opc != 0) {
        opc = menu();
        switch (opc) {
            case 1:
                alugar_produto();
                break;
            case 2:
                devolver_produto();
                break;
            case 3:
                listar_inventario();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }
    return 0;
}