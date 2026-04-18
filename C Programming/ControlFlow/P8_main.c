#include <stdio.h>
extern int shared_score; // We tell the compiler: "Hey, shared_score exists somewhere else in the company."

int main()
{

    printf("Shared Score: %d\n", shared_score); // This works perfectly! We are accessing the variable from P8_helper.c.

    // printf("Secret Code: %d\n", secret_code); // ERROR! P8_main.c cannot see secret_code because it is "static" in P8_helper.c.

    return 0;
}

