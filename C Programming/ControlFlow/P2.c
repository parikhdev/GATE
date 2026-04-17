#include <stdio.h>
void test_char_loop()
{
    printf("STARTING CHAR LOOP \n");
    char ch;
    int step_counter = 0; 
    for (ch = 1; ch; ch++)
    {
        step_counter++;
    }
    printf("Char loop finished!\n");
    printf("Final value of ch: %d\n", ch);
    printf("Total steps taken: %d\n\n", step_counter);
}
// Output will be values from 1,2,..,126,127,-128,-127,-126,...-2,-1 (255 values) -> Signed Char -> pow(2,8) i.e 256 including 0

/* What if we change the char to int?
It will become an infinite loop or (pow(2,32) - 1 ) values.. Why it seems infinite: printf is an incredibly slow I/O operation. Printing 4.2 billion times takes hours, so it looks frozen */

void test_int_loop()
{
    printf("STARTING INT LOOP \n");
    int ch;
    unsigned long long step_counter = 0;

    // No printf inside the loop, so it runs at max CPU speed
    for (ch = 1; ch; ch++)
    {
        step_counter++;
    }
    printf("Int loop finished!\n");
    printf("Final value of ch: %d\n", ch);
    printf("Total steps taken: %llu\n", step_counter);
}

/*
 * WHY IT EXITS AT 0
 * - The loop condition `ch` is evaluated as `ch != 0`.
 * - The loop physically cannot end until `ch` becomes exactly 0. That is why, if
 * - you print `ch` after the loop finishes, it will always be 0. */

int main()
{
   test_char_loop();
   test_int_loop();
    return 0;
}
