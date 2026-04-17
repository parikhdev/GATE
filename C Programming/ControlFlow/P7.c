#include <stdio.h>

void counter()
{
    static int count = 0; // Initialized only once
    count++;
    printf("%d ", count);
}

int main()
{
    counter(); // Outputs: 1
    counter(); // Outputs: 2
    counter(); // Outputs: 3
    return 0;
}

// Output is 1 2 3
/* If count were a regular variable, the output would simply be 1 1 1 because it would be recreated and reset to 0 every time */