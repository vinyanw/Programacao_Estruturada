#include <stdio.h>
int main(){
    int a, b;

    printf("Digite um número 01: ");
    scanf("%d",&a);

    printf("Digite um número 02: ");
    scanf("%d",&b);

    if (a>b){
        printf("%d é maior do que %d",a, b);
    } else if (a==b) {
          printf("valores iguais");
    } else {
       printf("%d é maior do que %d",b, a);
    }
}