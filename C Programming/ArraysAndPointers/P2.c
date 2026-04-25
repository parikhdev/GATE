// 2D Array
#include <stdio.h>
int main()
{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // 2D Array
    // %u -> unsigned Integer
    // Remember the rule, less than 2D = Address and 2D = Element

    printf("%u\n", a);    // ArrayName dimnishes to starting element(a[0][j]) Address, size = 16 Bytes
    printf("%u\n", a[0]); // Address of 1st element of 1st row, size = 4 Bytes
    printf("%u\n", &a);   // Address of the whole 2D array, size = 48 Bytes

    printf("%u\n", (a + 1));    // Address of 2nd row (a[1]), skips 16 Bytes forward
    printf("%u\n", *(a + 1));   // Address of 1st element of 2nd row, changes step size to 4 Bytes
    // THE MOST IMPORTANT PART: Why is this an address and not a value?
    // *(a + 1) is exactly equivalent to writing a[1].
    // It only has 1 level of dereferencing (*), so it is "less than 2D".
    // Rule applied: Less than 2D = Address.
    printf("%u\n", *(a + 1) + 2); // Address of 3rd element in 2nd row (a[1][2])

    printf("%u\n", (a[0] + 1)); // Address of 2nd element of 1st row (a[0][1]), size = 4 Bytes

    printf("%u\n", a[0][1]);         // 2D = Element -> Value: 2
    printf("%u\n", *(a[0] + 1));     // 2D = Element (Array[0] + 1st dereference) -> Value: 2
    printf("%u\n", *(*a + 1));       // 2D = Element (Two * means 2D) -> Value: 2
    printf("%u\n", *(*(a + 1) + 2)); // 2D = Element (Two * means 2D) -> Value: 7
    printf("%u\n", **a);             // 2D = Element (Two * means 2D) -> Value: 1

    return 0;
}

/*
Output:
1836477560
1836477560
1836477560
1836477576
1836477576
1836477584
1836477564
2
2
2
7
1
*/