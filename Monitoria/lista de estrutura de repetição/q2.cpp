#include <stdio.h>
int main(){
    int num;

    printf("Digite seu número par: ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++) {
    printf("%d\n", 2 * i);
    }
    return 0;
}