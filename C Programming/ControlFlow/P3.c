#include <stdio.h>
int main()
{
    int i = 1;
    for (printf("%d\n", 1); i <= 5; printf("%d\n", 3))
    {
        printf("%d", 2);
        i++;
    }
    return 0;
}

//Output is 1 23 23 23 23 23
// pf is a valid expression as it returns the int value i.e the length of the characters in it