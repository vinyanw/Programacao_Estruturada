#include <stdio.h>

typedef struct Ultraprocessado
{
    float preco;
    int quantVendida;
    int quantDisponivel;
  } ult;

typedef struct Natural
{
    float preco;
    int quantVendida;
    int quantDisponivel;
  } nat;

int main() {
ult ult1; // ultraprocessado
nat nat1; // natural
int totalProdutos, totalVendidos;
float totalVenda, totalNaoVendido, totalEsperado;

    printf("\nPreco unitario: ");
    scanf("%f", &ult1.preco);
    printf("\nQuantidade vendida: ");
    scanf("%d", &ult1.quantVendida);
    printf("\nQuantidade disponivel: ");
    scanf("%d", &ult1.quantDisponivel);

    printf("\nPreco unitario: ");
    scanf("%f", &nat1.preco);
    printf("\nQuantidade vendida: ");
    scanf("%d", &nat1.quantVendida);
    printf("\nQuantidade disponivel: ");
    scanf("%d", &nat1.quantDisponivel);
    
    totalProdutos = (ult1.quantVendida + ult1.quantDisponivel + nat1.quantVendida + nat1.quantDisponivel);
    totalVendidos = (ult1.quantVendida + nat1.quantVendida);
    totalVenda = (ult1.preco * ult1.quantVendida)+(nat1.preco * nat1.quantVendida);
    totalNaoVendido = (ult1.preco * ult1.quantDisponivel)+(nat1.preco * nat1.quantDisponivel);
    totalEsperado = (totalVenda + totalNaoVendido);

    printf("=-==-=-=-=-=-=-=-=-= Relatório -=-=-=-=-=-==-==-=-=\n");
    printf("\nQuantidade total de produtos: %d", totalProdutos);
    printf("\nQuantidade total de produtos vendidos: %d", totalVendidos);
    printf("\nValor total recebido com a venda: %2.f", totalVenda);
    printf("\nValor total de produtos nao vendidos: %2.f", totalNaoVendido);
    printf("\nValor total que esperava receber: %2.f", totalEsperado);

    return 0;
}