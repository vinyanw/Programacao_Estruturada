#include <stdio.h>
typedef struct Idade
{
    int dia;
    int mes;
    int ano;
} Data;

int main() {

    Data nascimento;
    Data hoje;
    hoje.dia = 9;
    hoje.mes = 8;
    hoje.ano = 2024;

    printf("Digite sua dada de nascimento em (dd/mm/aa): ");
    scanf("%d/%d/%d", &nascimento.dia, &nascimento.mes, &nascimento.ano);

    int idade = hoje.ano - nascimento.ano;

    if(hoje.mes * 30 + hoje.dia < nascimento.mes * 30 + nascimento.dia) {
        idade = idade - 1;
    }

    printf("%d anos", idade);
    return 0;
}