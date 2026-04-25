// Pointer Subtraction
#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};
    int *p = &a[1];
    int *q = &a[3];
    printf("%ld\n", q - p);
    return 0;
}

//Output: 2