// Function Pointer
#include <stdio.h>
int add(int, int);
int main()
{
    int (*P)(int, int);
    P = &add;
    printf("Sum of the values: %d\n", (*P)(10, 20)); // add(10,20) = (*P)(10,20)
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

// Output: Sum of the values: 30