// *(a+1) = a[1] = *(1+a) = 1[a]   if a is an array

#include <stdio.h>
int main()
{
    int a[4] = {10,20,30,40};
    printf("%d\n", a[0]);
    printf("%d\n", 0[a]);
    printf("%d\n", *(a+0));
    printf("%d\n", *(0+a));
    return 0;
}

//output is 10 10 10 10