#include <stdio.h>

int main()
{
    int matriz[4][4]; 
    int maiorNumero;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da matriz [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            if ((i == 0 && j == 0) || matriz[i][j] > maiorNumero)
            {
                maiorNumero = matriz[i][j];
            }
        }
    }    

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] == maiorNumero)
            {
                printf("Maior valor: %d\n", maiorNumero);
                printf("Localizacao: Linha [%d], Coluna [%d]\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}