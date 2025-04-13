#include <stdio.h>
int main(){
    int num;

    printf("Digite seu número impar: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++) {
    printf("%d", 2 * i - 1);
    }
    return 0;
}