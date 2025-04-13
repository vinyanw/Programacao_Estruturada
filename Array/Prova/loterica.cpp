#include <stdio.h>
int main()
{
    float contador[4] = {0};
    float vetor[4] = {200, 50, 20, 2};
    float valorCobrado = 0;
    float valorPago = 0;

    printf("Digite o preco do produto: ");
    scanf("%f", &valorCobrado);

    printf("Digite a quantia paga pelo cliente: ");
    scanf("%f", &valorPago);

    float troco = 0;
    troco = valorPago - valorCobrado;

    if (valorPago <= valorCobrado)
    {
        printf("Saldo insuficiente ou sem necessidade de troco\n");
        return 0;
    }
    

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
        if (contador[i] > 0)
        {
            printf("%.0f nota(s) de R$%.0f\n", contador[i], vetor[i]);
        }
    }
    
    printf("%.2f de moeda\n", troco);
    
    for (int i = 0; i < 4; i++)
    {
        printf("Posicao %d - nota %.0f = %.0f\n", i, vetor[i], contador[i]);
    }
    
    return 0;
}