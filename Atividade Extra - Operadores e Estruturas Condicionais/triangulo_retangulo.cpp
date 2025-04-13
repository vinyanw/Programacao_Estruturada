#include <stdio.h>
int main(){
    int n1, n2, n3; // números

    printf("Digite seu numero do lado A: ");
    scanf("%d",&n1);

    printf("Digite seu numero do lado B: ");
    scanf("%d",&n2);

    printf("Digite seu numero do lado C: ");
    scanf("%d",&n3);

    if ((n1 == 0) || (n2 == 0) || (n3 == 0)) {
        printf("\nvalor invalido, tem que ser diferente de zero");
        return 0;
    }

    if ((n3 * n3) == (n2 * n2) + (n1 * n1)) {
    printf("\ndados de acordo o teorema: (%d^2 + %d^2) = %d^2 PODEM FORMAR um triangulo retangulo", n1,n2,n3);
  } else {
    printf("\ndados de acordo com o teorema: (%d^2 + %d^2) = %d^2 NAO PODEM FORMAR um triangulo retangulo", n1,n2,n3);
  }
  return 0;
}