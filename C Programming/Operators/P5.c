#include <stdio.h>

int main ()
{
    int a = 1, b = 0, c = -1, d;
    d = --a || ++c && ++b;
    printf("%d%d%d%d", a, b, c, d);
    
    return 0;
}

// Output is 0000