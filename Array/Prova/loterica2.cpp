#include <stdio.h>
int main(){
    
    float contador[4];
    float vetor[4] = {100, 50, 5, 2};
    float valorProduto = 0;
    float valorCliente = 0;
    float troco = 0;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o valor que o cliente deu: ");
    scanf("%f", &valorCliente); 

    if (valorProduto >= valorCliente)
    {
        printf("Sem necessidade de troco ou valor insuficiente\n");
        return 0;
    }

    troco = valorCliente - valorProduto;
    for (int i = 0; i < 4; i++)
    {
        while (vetor[i] <= troco)
        {
            troco = troco - vetor[i];
            contador[i] += 1;
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("Posiçao %d - Nota de R$%f - Quantidade (%.0f)\n", i, vetor[i], contador[i]);
    }
    printf("moedas: R$%.2f", troco);
    return 0;
}