//Program of Decimal to Binary using Recursion
#include <stdio.h>
void f(int n)
{
    if (n==0 || n==1){
        printf("%d", n);
        return;
    }
    else{
        f(n-1);
        printf("%d", n%2);
    }
}
int main()
{
    f(3);
    return 0;

}

//Output: 101