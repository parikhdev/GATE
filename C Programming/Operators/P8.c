#include <stdio.h>
int main ()
{
    int a;
    a = 20 < 60 ? 12 != 200 > 346 ? 10 : 20 : 30;
    printf("%d", a);

    return 0;
}

// Output is 10
/* 12 != 200 > 346 ? 10 : 20 */