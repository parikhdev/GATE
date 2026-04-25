#include <stdio.h>
int f(int n)
{
    if (n==0)
    return n;
    else{
        f(n-1);
        printf("%d ", n);
        f(n-1);
    return 0;
    }
}
int main()
{
    f(3);
    return 0;
}

// Output is: 1 2 1 3 1 2 1