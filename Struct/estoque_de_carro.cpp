#include <stdio.h>
#include <string.h>

typedef struct {
    char placa[10];
    char modelo[20];
} Carro;

Carro estacionamento[50];
int num_carros = 0;

void estacionar() {
    if (num_carros >= 50) {
        printf("Estacionamento cheio!\n");
        return;
    }
    printf("Digite a placa do carro: ");
    scanf("%s", estacionamento[num_carros].placa);
    printf("Digite o modelo do carro: ");
    scanf("%s", estacionamento[num_carros].modelo);
    num_carros++;
    printf("Carro estacionado com sucesso!\n");
}

void remover() {
    char placa[10];
    printf("Digite a placa do carro a ser removido: ");
    scanf("%s", placa);
    for (int i = 0; i < num_carros; i++) {
        if (strcmp(estacionamento[i].placa, placa) == 0) {
            for (int j = i; j < num_carros - 1; j++) {
                estacionamento[j] = estacionamento[j + 1];
            }
            num_carros--;
            printf("Carro removido com sucesso!\n");
            return;
        }
    }
    printf("Carro não encontrado!\n");
}

void listar() {
    printf("\n=== Carros Estacionados ===\n");
    for (int i = 0; i < num_carros; i++) {
        printf("Placa: %s, Modelo: %s\n", estacionamento[i].placa, estacionamento[i].modelo);
    }
}

int menu() {
    int opc;
    printf("\n=== Menu Estacionamento ===\n");
    printf("1 - Estacionar carro\n");
    printf("2 - Remover carro\n");
    printf("3 - Listar carros\n");
    printf("0 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opc);
    return opc;
}

int main() {
    int opc = -1;
    while (opc != 0) {
        opc = menu();
        switch (opc) {
            case 1:
                estacionar();
                break;
            case 2:
                remover();
                break;
            case 3:
                listar();
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
