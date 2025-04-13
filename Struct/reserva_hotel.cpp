#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int quarto_num;
} Reserva;

Reserva reservas[50];
int num_reservas = 0;

void fazer_reserva() {
    if (num_reservas >= 50) {
        printf("Hotel lotado!\n");
        return;
    }
    printf("Digite o nome do cliente: ");
    scanf("%s", reservas[num_reservas].nome);
    printf("Digite o número do quarto: ");
    scanf("%d", &reservas[num_reservas].quarto_num);
    num_reservas++;
    printf("Reserva feita com sucesso!\n");
}

void cancelar_reserva() {
    char nome[30];
    printf("Digite o nome do cliente para cancelar a reserva: ");
    scanf("%s", nome);
    for (int i = 0; i < num_reservas; i++) {
        if (strcmp(reservas[i].nome, nome) == 0) {
            for (int j = i; j < num_reservas - 1; j++) {
                reservas[j] = reservas[j + 1];
            }
            num_reservas--;
            printf("Reserva cancelada com sucesso!\n");
            return;
        }
    }
    printf("Reserva não encontrada!\n");
}

void listar_reservas() {
    printf("\n=== Reservas ===\n");
    for (int i = 0; i < num_reservas; i++) {
        printf("Nome: %s, Quarto: %d\n", reservas[i].nome, reservas[i].quarto_num);
    }
}

int menu() {
    int opc;
    printf("\n=== Menu de Reservas ===\n");
    printf("1 - Fazer reserva\n");
    printf("2 - Cancelar reserva\n");
    printf("3 - Listar reservas\n");
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
                fazer_reserva();
                break;
            case 2:
                cancelar_reserva();
                break;
            case 3:
                listar_reservas();
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