#include <stdio.h>
#include <string.h>
#include <windows.h>
typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[30];
    char cpf[12];
    char sexo;
    Data nascimento;
} Pessoa;

Pessoa pessoas[50];
int posicaoPessoas = 0;
void inserirDados()
{
    if (posicaoPessoas > 50)
    {
        printf("banco tá cheio");
    }

    printf("Digite seu nome: ");
    scanf("%s", pessoas[posicaoPessoas].nome);
    printf("Digite seu cpf: ");
    scanf("%s", pessoas[posicaoPessoas].cpf);
    printf("Digite seu sexo como M ou F: ");
    scanf("%s", &pessoas[posicaoPessoas].sexo);
    if (pessoas[posicaoPessoas].sexo != 'F' && pessoas[posicaoPessoas].sexo != 'M')
    {
        printf("Letra inválida, retorne.");
        return;
    }
    printf("Digite sua data de nascimento em dd/mm/aaaa: ");
    scanf("%d/%d/%d", &pessoas[posicaoPessoas].nascimento.dia, &pessoas[posicaoPessoas].nascimento.mes, &pessoas[posicaoPessoas].nascimento.ano);
    posicaoPessoas += 1;
}

void quantidadeSexo()
{
    int quantidadeMulheres = 0;
    int quantidadeHomens = 0;
    for (int i = 0; i < 50; i++)
    {
        if (pessoas[i].sexo == 'F')
        {
            quantidadeMulheres += 1;
        }
        if (pessoas[i].sexo == 'M')
        {
            quantidadeHomens += 1;
        }
    }
    printf("Quantidade de homens presentes: %d\n", quantidadeHomens);
    printf("Quantidade de mulheres presentes: %d\n", quantidadeMulheres);
}

int buscaCPF(char cpf[])
{
    for (int i = 0; i < posicaoPessoas; i++)
    {
        if (strcmp(cpf, pessoas[i].cpf) == 0)
        {
            return i;
        }
    }
    return -1;
}

void exibirCPF(char cpf[])
{
    int pos = buscaCPF(cpf);
    if (pos >= 0)
    {
        printf("Você buscou pelo CPF de número %s\n", pessoas[pos].cpf);
        printf("Nome: %s\n", pessoas[pos].nome);
        printf("Data de nascimento: %d/%d/%d\n", pessoas[pos].nascimento.dia, pessoas[pos].nascimento.mes, pessoas[pos].nascimento.ano);
        printf("Sexo: %c\n", pessoas[pos].sexo);
    }
    else
    {
        printf("CPF não encontrado\n");
        return;
    }
}

int buscaData(int dia, int mes, int ano)
{
    for (int i = 0; i < posicaoPessoas; i++)
    {
        if ((dia == pessoas[i].nascimento.dia) && (mes == pessoas[i].nascimento.mes) && (ano == pessoas[i].nascimento.ano))
        {
            return i;
        }
    }
    return -1;
}

void exibirData(int dia, int mes, int ano)
{
    int pos = buscaData(dia, mes, ano);
    if (pos >= 0)
    {
        printf("Você buscou pela data %d/%d/%d\n", dia, mes, ano);
        printf("Nasceram nessa data\n");
        printf("Nome: %s\n", pessoas[pos].nome);
    }
    else
    {
        printf("Nenhuma pessoa nasceu na data informada\n");
        return;
    }
}

int calcularDia(int dia, int mes, int ano)
{
    return ano * 365 + mes * 30 + dia;
}

void exibirDataComparada(int dia, int mes, int ano, int diaFinal, int mesFinal, int anoFinal)
{
    int diasInicial = calcularDia(dia, mes, ano);
    int diasFinal = calcularDia(diaFinal, mesFinal, anoFinal);
    int quantidadeComparacao = 0;
    printf("Quantidade de pessoas entre %d/%d/%d e %d/%d/%d:\n", dia, mes, ano, diaFinal, mesFinal, anoFinal);

    for (int i = 0; i < posicaoPessoas; i++)
    {
        int diasNascimento = calcularDia(pessoas[i].nascimento.dia, pessoas[i].nascimento.mes, pessoas[i].nascimento.ano);
        if (diasNascimento >= diasInicial && diasNascimento <= diasFinal)
        {
            quantidadeComparacao += 1;
        }
    }
    printf("Quantidade de pessoas: %d\n", quantidadeComparacao);
}

int menu()
{
    int opc;
    printf("\n=== Menu de cadastro de pessoas ===\n");
    printf("1 - Inserir pessoa\n");
    printf("2 - Visualizar quantidade de homens e mulheres\n");
    printf("3 - Buscar por CPF\n");
    printf("4 - Busca por data de nascimento\n");
    printf("5 - Listagem por data\n");
    printf("0 - Sair\n");
    printf("\nDigite a opção: ");
    scanf("%d", &opc);
    return opc;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char cpf[12];
    int dia = 0;
    int mes = 0;
    int ano = 0;
    int diaFinal = 0;
    int mesFinal = 0;
    int anoFinal = 0;
    int opc = -1;
    while (opc != 0)
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            inserirDados();
            break;
        case 2:
            quantidadeSexo();
            break;
        case 3:
            printf("Digite o CPF: ");
            scanf("%s", cpf);
            exibirCPF(cpf);
            break;
        case 4:
            printf("Digite a data de nascimento em (dd/mm/aaaa): ");
            scanf("%d/%d/%d", &dia, &mes, &ano);
            exibirData(dia, mes, ano);
            break;
        case 5:
            printf("Digite a data inicial em (dd/mm/aaaa): ");
            scanf("%d/%d/%d", &dia, &mes, &ano);
            printf("Digite a data final em (dd/mm/aaaa): ");
            scanf("%d/%d/%d", &diaFinal, &mesFinal, &anoFinal);
            exibirDataComparada(dia, mes, ano, diaFinal, mesFinal, anoFinal);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }
    return 0;
}