#include <stdio.h>

int main() {
    float vetor[5];
    int escolha = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor no vetor [%d]: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("0 - Finalize o programa\n");
    printf("1 - Vetor na ordem direta\n");
    printf("2 - Vetor na ordem inversa\n");
    printf("Digite um número de 1 a 3: ");
    scanf("%d", &escolha);

    if (escolha <= 0 || escolha > 2) {
        printf("Programa finalizado.\n");
        return 0;
    }

    if (escolha == 1) {
        for (int i = 0; i < 5; i++) {
            printf("%.2f ", vetor[i]);
        }
    } else {
        for (int i = 4; i >= 0; i--) { 
            printf("%.2f ", vetor[i]);
        }
    }

    return 0;
}