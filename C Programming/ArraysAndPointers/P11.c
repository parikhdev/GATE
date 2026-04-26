// variable scoping, variable shadowing, and parameter passing in C
#include <stdio.h>
#define print(x) printf("%d ", x) // it means replace pf with print

int x;

void Q(int z) // Runs Third
{
    z = z + x; // Function Q does not have its own local x, so it looks outward and uses the global x i.e 5
    print(z);
}

void P(int *y) // Runs Second
{
    int x = *y + 2; // Created a new local variable x
    Q(x);
    *y = x - 1; // P(int *y): * *y = x - 1; -> *y modifies the global x. It takes the local x (7), subtracts 1, and updates the global x to 6
    print(x);
}

int main() // Runs First
{
    x = 5;
    P(&x);
    print(x);
    return 0;
}

// Output: 12 7 6
