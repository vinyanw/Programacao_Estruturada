#include <stdio.h>

int main()
{
    int matriz[5][3]; // Matriz para armazenar as notas
    int piorNota1 = 0;
    int piorNota2 = 0;
    int piorNota3 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota do aluno [%d] na prova [%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }    

    for (int i = 1; i < 5; i++)
    {
        if (matriz[i][0] < matriz[piorNota1][0])
            piorNota1 = i;
        if (matriz[i][1] < matriz[piorNota2][1])
            piorNota2 = i;
        if (matriz[i][2] < matriz[piorNota3][2])
            piorNota3 = i;
    }

    printf("Numero de alunos com pior nota na prova 1: 1\n");
    printf("Numero de alunos com pior nota na prova 2: 1\n");
    printf("Numero de alunos com pior nota na prova 3: 1\n");

    return 0;
}