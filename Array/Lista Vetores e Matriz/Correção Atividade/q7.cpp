#include <stdio.h>
int main(){ 
    int matriz[5][5] = {{1, 0, 0, 0, 0},
                        {0, 1, 0, 0, 0},
                        {0, 0, 1, 0, 0},
                        {0, 0, 0, 1, 0},
                        {0, 0, 0, 0, 1},};

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (i==j)
        {
            if (matriz[i][j] != 1)
            {
                printf("Nao eh identidade");
                return 0;
            }            
        } else {
            if (matriz[i][j] != 0)
            {
                printf("Nao eh identidade");
                return 0;
            }   
        }
        
    }
    
}
printf("Eh Identidade");

}