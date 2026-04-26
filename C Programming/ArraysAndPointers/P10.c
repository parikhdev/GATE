// Pointer to an Array (int (*P)[3])

#include <stdio.h>
void fun(int (*P)[3]);
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    fun(a);
    printf("%d %d %d", a[1][1], a[1][2], a[2][0]);
    return 0;
}

void fun(int (*P)[3])
{
    ++P;
    (*P)[1] = (*P)[1] + 1;
}

//Output: 6 6 7