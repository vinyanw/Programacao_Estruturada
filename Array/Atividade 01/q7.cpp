#include <stdio.h>
int main() {

    int matrix[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("digite na matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }

    }

    if (matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1 && matrix[3][3] == 1 && matrix[4][4] == 1)
    {
        printf("Sua matriz eh identidade! ");
    } else {
        printf("Sua matriz nao eh identidade");
    }
    
    return 0;
}