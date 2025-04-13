#include <stdio.h>
int main() {

    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
        printf("O multiplo de 3: %d\n", i);
        }
        if (i % 5 == 0)
        {
        printf("O multiplo de 5 eh: %d\n", i);
        }
        
    }
    return 0;
}