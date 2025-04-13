// Encontrar o elemento a ser removido: Usar um loop para procurar o elemento no array.

// Deslocar os elementos subsequentes: Após encontrar o elemento, mover todos os elementos subsequentes uma posição para trás.

// Reduzir o tamanho do array: Decrementar o contador que mantém o tamanho atual do array.

// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     char nome[30];
//     float preco;
//     int quantidade;
// } Item;

// Item inventario[100];
// int num_itens = 0;

// // Função para adicionar um item ao inventário
// void adicionar_item(char nome[], float preco, int quantidade) {
//     strcpy(inventario[num_itens].nome, nome);
//     inventario[num_itens].preco = preco;
//     inventario[num_itens].quantidade = quantidade;
//     num_itens++;
// }

// // Função para remover um item do inventário
// void remover_item(char nome[]) {
//     int encontrado = 0;
//     for (int i = 0; i < num_itens; i++) {
//         if (strcmp(inventario[i].nome, nome) == 0) {
//             encontrado = 1;
//             // Mover todos os elementos subsequentes uma posição para trás
//             for (int j = i; j < num_itens - 1; j++) {
//                 inventario[j] = inventario[j + 1];
//             }
//             num_itens--;  // Decrementa o número de itens
//             printf("Item '%s' removido com sucesso!\n", nome);
//             break;
//         }
//     }
//     if (!encontrado) {
//         printf("Item '%s' não encontrado no inventário.\n", nome);
//     }
// }

// // Função para listar todos os itens no inventário
// void listar_itens() {
//     printf("\n=== Inventário ===\n");
//     for (int i = 0; i < num_itens; i++) {
//         printf("Nome: %s, Preço: R$ %.2f, Quantidade: %d\n", inventario[i].nome, inventario[i].preco, inventario[i].quantidade);
//     }
// }

// int main() {
//     adicionar_item("Martelo", 29.99, 5);
//     adicionar_item("Chave de fenda", 9.99, 10);
//     adicionar_item("Serra", 49.99, 3);

//     listar_itens();

//     remover_item("Chave de fenda");

//     listar_itens();

//     return 0;
// }