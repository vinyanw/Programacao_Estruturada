#include <stdio.h>
int main()
{

    int matrizUm[3][3];
    int matrizDois[3][3];
    int matrizResultado[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite sua primeira matriz 3x3 [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizUm[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite sua segunda matriz 3x3 [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizDois[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizResultado[i][j] = 0;
            for (int m = 0; m < 3; m++)
            {
                matrizResultado[i][j] += matrizUm[i][m] * matrizDois[m][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("[ ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrizResultado[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return 0;
}