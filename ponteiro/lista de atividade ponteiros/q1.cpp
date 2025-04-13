#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("x: %d\ny: %d\np: %d", x, y, p);
    return 0;
}
