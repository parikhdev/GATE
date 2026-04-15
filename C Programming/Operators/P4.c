#include <stdio.h>
int main()
{
    int a;
    a = printf("C") || printf("Programming") && printf("Language");
    printf("%d", a);
    return 0;
}

// Output is C1 