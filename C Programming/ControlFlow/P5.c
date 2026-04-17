#include <stdio.h>
int main()
{
    int i,j,k;
    
    switch(i = 5 + (j = 6 + (k = 4))) {
        case 0:  printf("Zero");
                 break;
        case 15: printf("15");
    }

    return 0;
}

//Output is 15