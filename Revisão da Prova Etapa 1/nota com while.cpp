#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    char nome[20];

    while (1) 
    { 
        printf("\nDigite o nome do fulano: ");
        scanf("%s", nome);

        if (nome[0] == 's' && nome[1] == 'a' && nome[2] == 'i' && nome[3] == 'r') {
            printf("programa finalizado");
            return 0;
        }

        printf("Digite as notas separadas por espaço (n1 n2 n3)\n");
        scanf("%f %f %f", &n1, &n2, &n3);
        media = (n1+n2+n3)/3;
        
        if ((media>0) && (media<4))  {
            printf("%s foi reprovado!\n", nome);
        } else if ((media >= 4) && (media < 7)) {
            printf("%s ficou de recuperacao!\n", nome);
        } else {
            printf("%s foi aprovado!\n", nome);
        }
    }
}