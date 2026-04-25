// Complex Pointer Arithmetic & Operator Precedence
#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};
    int *P[4] = {a + 2, a, a + 1, a + 3};
    int **q;
    q = &P[0];
    printf("The Value is %d\n", *++*++q); 
    return 0;
}

// Output: The Value is 20