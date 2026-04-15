#include <stdio.h>
int main()
{
    int a;
    a = 2 < 5 && !0 ? 10: 20;
    printf("%d", a);
    return 0;
}

// Output is 10, which means the value of the expression (2<5 && !0) is True or 1, if it's False or 0 it will print the 20