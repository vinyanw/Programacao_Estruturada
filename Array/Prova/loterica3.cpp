#include <stdio.h>
int main()
{
    int contador[4] = {0};
    float valor_cob, valor_pag;
    float ced[4] = {200, 50, 20, 2};
    float troco;

    printf("Digite o valor cobrado: ");
    scanf("%f", &valor_cob);

    printf("Digite o valor pago: ");
    scanf("%f", &valor_pag);

    if (valor_pag <= valor_cob)
    {
        printf("Sem troco ou saldo insuficiente\n");
        return 0;
    }

    troco = valor_pag - valor_cob;

    for (int i = 0; i < 4; i++)
    {
        while (ced[i] <= troco) {
            troco = troco - ced[i];
            contador[i] += 1;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (contador[i] > 0)
        {
            printf("%d notas de R$%.2f + ", contador[i], ced[i]);
        }
    }
    printf("%.2f de moedas", troco);
    
    return 0;
}