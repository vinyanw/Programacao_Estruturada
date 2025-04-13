#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    float preco;
    int quantidade;
} Produto;

Produto carrinho[50];
int num_produtos = 0;

void adicionar_produto() {
    if (num_produtos >= 50) {
        printf("Carrinho cheio!\n");
        return;
    }
    printf("Digite o nome do produto: ");
    scanf("%s", carrinho[num_produtos].nome);
    printf("Digite o preço do produto: ");
    scanf("%f", &carrinho[num_produtos].preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &carrinho[num_produtos].quantidade);
    num_produtos++;
    printf("Produto adicionado ao carrinho!\n");
}

void finalizar_compra() {
    float total = 0;
    printf("\n=== Itens no Carrinho ===\n");
    for (int i = 0; i < num_produtos; i++) {
        printf("Produto: %s, Preço: R$ %.2f, Quantidade: %d\n", carrinho[i].nome, carrinho[i].preco, carrinho[i].quantidade);
        total += carrinho[i].preco * carrinho[i].quantidade;
    }
    printf("Total da compra: R$ %.2f\n", total);
    num_produtos = 0; // Esvaziar o carrinho após a compra
}

int menu() {
    int opc;
    printf("\n=== Menu de Compras ===\n");
    printf("1 - Adicionar produto\n");
    printf("2 - Finalizar compra\n");
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
                adicionar_produto();
                break;
            case 2:
                finalizar_compra();
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