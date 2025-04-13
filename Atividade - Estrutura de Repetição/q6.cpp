#include <stdio.h>
int main() {
int tabuada = 5;

    for (int i = 1; i <= 10; i++)
    {
        printf("5 * %d\n = ", i);
        tabuada = 5 * i;
        printf("| %d |\n", tabuada);
    }
    return 0;    
}