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
    char cpf[12]; // armazena apenas numeros (sem . e -)
    char sexo;    // utilizar M para masculino e F para Feminino
    Data nascimento;
} Pessoa;

void adicionar(Pessoa *pessoas, int *posicao)
{
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoas[*posicao].nome);

    printf("Digite o CPF: ");
    scanf("%s", pessoas[*posicao].cpf);

    printf("Digite o Sexo como M ou F: ");
    scanf(" %c", &pessoas[*posicao].sexo);
     if (pessoas[*posicao].sexo != 'F' && pessoas[*posicao].sexo != 'M')
    {
        printf("Letra inválida, retorne.");
        return;
    }

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &pessoas[*posicao].nascimento.dia,
          &pessoas[*posicao].nascimento.mes, &pessoas[*posicao].nascimento.ano);

    (*posicao)++;
}

void imprimir(Pessoa *pessoas, int *total)
{
    printf("\nIMPRIMINDO\n");
    for (int i = 0; i < *total; i++)
    {
        printf("-----------------------\n");
        printf("Nome: %s\n", pessoas[i].nome);
        printf("CPF: %s\n", pessoas[i].cpf);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Data de nascimento: %d/%d/%d\n", pessoas[i].nascimento.dia,
               pessoas[i].nascimento.mes, pessoas[i].nascimento.ano);
        printf("-----------------------");
        printf("\n");
    }
}

int buscaCPF(Pessoa *pessoas, char *cpf, int *total)
{
    for (int i = 0; i < *total; i++)
    {
        if (strcmp(cpf, pessoas[i].cpf) == 0)
        {
            return i;
        }
    }
    return -1;
}

int editarPessoa(Pessoa *pessoas, char *cpf, int *total)
{
    int posicao = buscaCPF(pessoas, cpf, total);
    if (posicao >= 0)
    {
        printf("Você buscou pelo CPF de número %s\n", pessoas[posicao].cpf);
        printf("Reescreva o nome da pessoa: ");
        scanf("%s", pessoas[posicao].nome);

        printf("Reescreva o Sexo em M ou F: ");
        scanf(" %c", &pessoas[posicao].sexo);

        printf("Reescreva a data de nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &pessoas[posicao].nascimento.dia,
              &pessoas[posicao].nascimento.mes, &pessoas[posicao].nascimento.ano);
        return 1;
    }
    else
    {
        printf("CPF não encontrado, portanto não tem como editá-lo\n");
        return -1;
    }
}

int calcularDia(int *dia, int *mes, int *ano)
{
    return (*ano) * 365 + (*mes) * 30 + (*dia);
}

void exibirMaiorMenorData(Pessoa *pessoas, int total)
{
    int maior = -1;
    int menor = 99999999;
    char maiorNome[30], menorNome[30];

    for (int i = 0; i < total; i++)
    {
        int quantidadeDias = calcularDia(&pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);

        if (quantidadeDias < menor)
        {
            menor = quantidadeDias;
            strcpy(menorNome, pessoas[i].nome);
        }

        if (quantidadeDias > maior)
        {
            maior = quantidadeDias;
            z(maiorNome, pessoas[i].nome);
        }
    }

    printf("A pessoa mais velha é: %s\n", menorNome);
    printf("A pessoa mais nova é: %s\n", maiorNome);
}

void quantidadeMes(Pessoa *pessoas, int total) {
    int jan = 0, fev = 0, mar = 0, abr = 0, mai = 0, jun = 0, jul = 0, ago = 0, set = 0, out = 0, nov = 0, dez = 0;
    
    for (int i = 0; i < total; i++) {
        switch (pessoas[i].nascimento.mes) {
            case 1: jan += 1; 
            break;
            case 2: fev += 1; 
            break;
            case 3: mar += 1; 
            break;
            case 4: abr += 1; 
            break;
            case 5: mai += 1; 
            break;
            case 6: jun += 1; 
            break;
            case 7: jul += 1; 
            break;
            case 8: ago += 1; 
            break;
            case 9: set += 1; 
            break;
            case 10: out += 1; 
            break;
            case 11: nov += 1; 
            break;
            case 12: dez += 1; 
            break;
            default: printf("\nMês inválido\n"); break;
        }
    }

    printf("Relatório de pessoas por meses\n");
    printf("--------------------------\n");
    printf("Janeiro: %d\n", jan);
    printf("Fevereiro: %d\n", fev);
    printf("Março: %d\n", mar);
    printf("Abril: %d\n", abr);
    printf("Maio: %d\n", mai);
    printf("Junho: %d\n", jun);
    printf("Julho: %d\n", jul);
    printf("Agosto: %d\n", ago);
    printf("Setembro: %d\n", set);
    printf("Outubro: %d\n", out);
    printf("Novembro: %d\n", nov);
    printf("Dezembro: %d\n", dez);
    printf("--------------------------");
}

int menu()
{
    int opc;
    printf("\n\n=== Menu de cadastro de pessoas ===\n");
    printf("1 - Inserir pessoa\n");
    printf("2 - Inserir o CPF pra editar cadastro\n");
    printf("3 - Imprimir pessoa mais nova e velha cadastrada\n");
    printf("4 - Relatório da quantidade de pessoas por mês\n");
    printf("5 - Impressão total\n");
    printf("0 - Sair\n");
    printf("\nDigite a opção: ");
    scanf("%d", &opc);
    return opc;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Pessoa pessoas[5];
    int quantidade = 0;
    char cpf[12];
    int opc = -1;
    while (opc != -0)
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            adicionar(pessoas, &quantidade);
            break;
        case 2:
            printf("Digite o CPF: ");
            scanf("%s", cpf);
            editarPessoa(pessoas, cpf, &quantidade);
            break;
        case 3:
            exibirMaiorMenorData(pessoas, quantidade);
            break;
        case 4:
            quantidadeMes(pessoas, quantidade);
            break;
        case 5:
            imprimir(pessoas, &quantidade);
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