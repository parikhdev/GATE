#include <stdio.h>
void fun(int *);     // Fwd Declaration
int add(int *, int); // Fwd Declaration
int main()
{
    int a[4] = {10, 20, 30, 40};
    fun(a); // Recommended fun(a,4);
    int sum = add(a, 4);
    printf("Second element of the array is %d\n", a[1]);
    printf("Sum of all elements of array is %d\n", sum);
    return 0;
}

void fun(int *P) // We can also write P[] in place of *P (Same meaning)
{
    ++P;  // Unused since we are not storing it anywhere 
    *P++; // Unused since we are not storing it anywhere
}

int add(int *P, int n) // Add Function that takes address of the array and it's size
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + P[i];
    }
    return sum;
}
/*
Output:
Second element of the array is 20
Sum of all elements of array is 100
*/