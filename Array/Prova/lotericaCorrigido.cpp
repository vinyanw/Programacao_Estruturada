#include <stdio.h>
int main()
{

    float valor_cobrado, valor_pago;

    printf("Digite o valor cobrado: ");
    scanf("%f", &valor_cobrado);

    printf("Digite o valor pago: ");
    scanf("%f", &valor_pago);

    if (valor_cobrado > valor_pago)
    {
        printf("Saldo insuficiente\n");
        return 0;
    }

    if (valor_cobrado == valor_pago)
    {
        printf("Nao precisa de troco\n");
        return 0;
    }

    int quantidade_cedulas[4] = {0, 0, 0, 0};
    int valor_cedulas[4] = {200, 50, 20, 2};

    float troco = valor_pago - valor_cobrado;

    for (int i = 0; i < 4; i++)
    {
        quantidade_cedulas[i] = troco / valor_cedulas[i];
        troco = troco - quantidade_cedulas[i] * valor_cedulas[i];
    }

    for (int i = 0; i < 4; i++)
    {
        if (quantidade_cedulas[i] > 0)
        {
            printf("%d notas de R$%d + ", quantidade_cedulas[i], valor_cedulas[i]);
        }
    }

    if (troco > 0)
    {
        printf("R%.2f de moedas\n", troco);
    }

    return 0;
}