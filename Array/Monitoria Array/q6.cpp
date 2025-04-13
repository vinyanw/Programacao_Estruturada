#include <stdio.h>

int main()
{
    int matriz[3][3];
    int somaDiagonalSecundaria = 0;

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        somaDiagonalSecundaria += matriz[i][2 - i];
    }

    printf("Soma dos elementos da diagonal secundária: %d\n", somaDiagonalSecundaria);

    return 0;
}