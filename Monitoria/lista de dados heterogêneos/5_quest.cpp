#include <stdio.h>

typedef struct Produto {
    int codigo;
    float preco;
    int quantidade_estoque;
    int dia;
    int mes;
    int ano;
} prod;

int main() {
    prod produto;

    printf("Digite o Código: ");
    scanf("%d", &produto.codigo);
    printf("Digite o Preço: ");
    scanf("%f", &produto.preco);
    printf("Digite a quantidade no estoque: ");
    scanf("%d", &produto.quantidade_estoque);
    printf("Digite a data de validade\n");
    printf("Dia: ");
    scanf("%d", &produto.dia);
    printf("Mês: ");
    scanf("%d", &produto.mes);
    printf("Ano: ");
    scanf("%d", &produto.ano);

    printf("=-=-=-=-=- Detalhe do Produto =-=-=-=-=\n");
    printf("\nCódigo: %d", produto.codigo);
    printf("\nPreço: %.2f", produto.preco);
    printf("\nQuant. no Estoque: %d", produto.quantidade_estoque);
    printf("\nValidade: %d/%d/%d", produto.dia, produto.mes, produto.ano);

    return 0;
}