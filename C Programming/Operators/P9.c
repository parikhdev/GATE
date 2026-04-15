#include <stdio.h>
int main()
{
    char a = 'A';
    printf("%zu\n", sizeof(a));
    printf("%lu", sizeof('A'));
    
    return 0;
}

// Output is 1(size of char 1 byte) and 4(size of int) -> as 'A' means 65