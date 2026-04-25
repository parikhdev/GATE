// Pass by Address and Call by Reference
#include <stdio.h>

void swap(int *, int *); // Fwd Declaration
int main()
{
    int a = 10, b = 20;
    printf("Before Swap, a is %d and b is %d\n", a, b);
    swap(&a, &b);                                    // Passing the address of the variables directly
    printf("After Swap, a is %d and b is %d", a, b); // all the changes will reflect here as this time we Passed Address directily
    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

/* Output:
Before Swap, a is 10 and b is 20
After Swap, a is 20 and b is 10
*/