#include <stdio.h>
int main(){
    
    int idade;
    float nota;
    float dinheiro;

    printf("Digite a idade do aluno: ");
    scanf("%d",&idade);

    printf("Digite a nota do aluno: ");
    scanf("%f",&nota);

    printf("Digite a quantidade de dinheiro do aluno em R$: ");
    scanf("%f",&dinheiro);

    if ((idade > 15) && (idade < 17)) {
        if (nota > 6){
            printf("Opcao A");
        } else if ((nota > 6) || (dinheiro >= 150)) {
            printf("Opcao C");
    }
    } else {
        if ((idade > 17) && (nota > 6) && (dinheiro>=150)) {
            printf("Opcao B");
        } else if ((dinheiro >= 150) && ((idade > 17) || (nota > 7))) {
            printf("Opcao D");
        } else {
            printf("\nvai pra viagem nao");
            printf("\nprograma finalizado");
            return 0;
        }
    }
    return 0;
}