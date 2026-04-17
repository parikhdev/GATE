#include <stdio.h>
int main()
{
    int i = -1;
    for (i++; i++; i++)
    {
        printf("%d", 2);
    }
    return 0;
}

//Output is 0 , as after the 1st Expression i becomes 0 for the 2nd Expression which comes out of the loop