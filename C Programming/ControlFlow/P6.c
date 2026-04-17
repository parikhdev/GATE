#include <stdio.h>
void swap(int, int);
int main()
{
    int a = 10, b = 20;
    printf("Before Swap\n");
    printf("a is %d and b is %d\n", a,b);
    swap(a,b);     // Pass by Value
    printf("a is %d and b is %d", a, b);
    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

/* Output is: 
Before Swap
a is 10 and b is 20 
a is 10 and b is 20 
*/

/*
Pass-by-Value (The Problem)
In C, when you pass variables to a function, it creates a copy of those values.
Any changes made inside the function only affect the copy.
The original variables in the calling function (like main) remain unchanged.

Pass-by-Reference (The Solution)
To modify original variables, you must pass their memory addresses using pointers.
Use the & operator to pass the address.
Use the * operator in the function to access and change the value at that address.

Key Syntax
&var: Address-of operator. It gets the memory location of var.
int *ptr: Pointer declaration. Tells C that ptr will hold a memory address.
*ptr: Dereference operator. It goes to the address stored in ptr to get/set the actual value.

Corrected Swap Example
#include <stdio.h>

// 1. Update the prototype to accept memory addresses (pointers)

void swap(int *x, int *y);
int main()
{
    int a = 10, b = 20;

    printf("Before Swap\n");
    printf("a is %d and b is %d\n", a, b);
    swap(&a, &b);  // Pass the memory addresses of a and b using the '&' operator
    printf("After Swap\n");
    printf("a is %d and b is %d\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x; // Use the '*' operator to get or change the value at that address
    *x = *y;
    *y = temp;

    // No return statement needed because we directly modified the originals
}
*/