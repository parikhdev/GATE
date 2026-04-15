#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 0, d;
    d = --a || ++b && c++;
    printf("%d%d%d%d", a, b, c, d);
    return 0;
}

// Output is 0310