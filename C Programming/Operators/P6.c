#include <stdio.h>
int main()
{ 
    int a = 31;
    printf("Decimal Value of 31 is %d\n", a); // %d is a format specifier for decimal values
    printf("Ocatal Value of 31 is %o\n", a); // %o is a format specifier for octal values
    printf("Hexadecimal Value 31 is %x\n", a); // %x is a format specifier for hexadecimal vlaues

    int b = 027; // This is Assumed as an Ocatal Value, Since it starts with 0
    printf("Decimal Value of b is %d\n", b);

    int c = 0xace; // This is Assumed as an Octal Value, Since it starts with 0x or 0X
    printf("Decimal Value of c is %d/n", c);

    return 0;
}