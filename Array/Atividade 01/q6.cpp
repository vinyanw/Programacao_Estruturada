#include <stdio.h>
int main() {

    int matrix[3][3];
    int valor = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("digite na matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            valor = matrix[i][j] + valor;
        }

    }
    
    printf("a soma de todos os elementos eh: %d", valor);
    return 0;
}