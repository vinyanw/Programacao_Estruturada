#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[50];
    int disponivel;
} Livro;

Livro biblioteca[50] = { {"O Senhor dos Anéis", 3}, {"1984", 2}, {"O Pequeno Príncipe", 5} };
int num_livros = 3;

void emprestar_livro() {
    char titulo[50];
    printf("Digite o título do livro para emprestar: ");
    scanf(" %[^\n]%*c", titulo);
    for (int i = 0; i < num_livros; i++) {
        if (strcmp(biblioteca[i].titulo, titulo) == 0 && biblioteca[i].disponivel > 0) {
            biblioteca[i].disponivel--;
            printf("Livro '%s' emprestado com sucesso!\n", titulo);
            return;
        }
    }
    printf("Livro não disponível para empréstimo!\n");
}

void devolver_livro() {
    char titulo[50];
    printf("Digite o título do livro para devolver: ");
    scanf(" %[^\n]%*c", titulo);
    for (int i = 0; i < num_livros; i++) {
        if (strcmp(biblioteca[i].titulo, titulo) == 0) {
            biblioteca[i].disponivel++;
            printf("Livro '%s' devolvido com sucesso!\n", titulo);
            return;
        }
    }
    printf("Livro não encontrado na biblioteca!\n");
}

void listar_livros() {
    printf("\n=== Livros Disponíveis ===\n");
    for (int i = 0; i < num_livros; i++) {
        printf("Título: %s, Disponível: %d\n", biblioteca[i].titulo, biblioteca[i].disponivel);
    }
}

int menu() {
    int opc;
    printf("\n=== Menu da Biblioteca ===\n");
    printf("1 - Emprestar livro\n");
    printf("2 - Devolver livro\n");
    printf("3 - Listar livros\n");
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
                emprestar_livro();
                break;
            case 2:
                devolver_livro();
                break;
            case 3:
                listar_livros();
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