#include <stdio.h>
int main() {
    int senha, senhaTeste;

    printf("digite a senha apenas com número: ");
    scanf("%d", &senha);

    for (int tentativa = 1; tentativa < 2; tentativa++) {
        printf("digite a mesma senha: ");
        scanf("%d", &senhaTeste);

        if (senha == senhaTeste) {
            printf("senha correta \n");
            return 0;
        } else {
            printf("senha INcorreta.\n");
        }
    }

    return 0; 
}