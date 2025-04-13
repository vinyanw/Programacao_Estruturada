#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    char nome[20];

       for (int i = 0; i < 10; i++)
       {
        printf("\nDigite o nome do fulano: ");
        scanf("%s", nome);

        printf("Digite as notas separadas por espaço (n1 n2 n3)\n");
        scanf("%f %f %f", &n1, &n2, &n3);
        media = (n1+n2+n3)/3;
            if ((media>0) && (media<4))  {
                printf("%s foi reprovado!\n", nome);
            } else if ((media >= 4) && (media < 7)) {
                printf("%s recuperacao!\n", nome);
            } else {
                printf("%s aprovado!\n", nome);
            }
       }
       
    return 0;
}