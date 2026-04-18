#include <stdio.h>

int shared_score = 100; // EXTERNAL LINKAGE (Common Bulletin Board)
// No "static" keyword. Everyone can share this.

static int secret_code = 42; // INTERNAL LINKAGE (Department Whiteboard)
// The "static" keyword locks this variable to helper.c ONLY.

// int main()
// {
//     printf("Shared Score is %d\n", shared_score);
//     printf("Secret Code is %d", secret_code);
//     return 0;
// }

/*
Output is:
Shared Score is 100
Secret Code is 42
*/
