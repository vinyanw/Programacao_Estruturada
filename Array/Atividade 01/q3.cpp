#include <stdio.h>
int main() {

    char string[10];

    printf("Digite alguma coisa ai de ate 10 caracteres: ");
    scanf("%s", string);

    for (int i = 10; i >= 0; i--)
    {
        printf("[%c]", string[i]);
    }
    

    return 0;
}