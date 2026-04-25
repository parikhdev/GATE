// Pointer Typecasting and Endianness
#include <stdio.h>
int main()
{
    /*
    The integer 300 in binary is a 32-bit number: 00000000 00000000 00000001 00101100
    If we convert that to Hexadecimal, it is : 0x0000012C
A) Decimal to HexaDecimal: (16^0, 16^1,...16^7) 0-9, A-> 10, B-> 11, C-> 12, D-> 13, E-> 14, F-> 15
B) Binary to HexaDecimal: This is the fastest trick in computer science. Because 2^4=16, just group
    the binary bits!
    Binary to Hexadecimal (Group by 4s)
    Rule: Start from the right. Group the binary number into chunks of 4 bits. Apply the 8-4-2-1 rule to each chunk.
    Example: 00101100
    Group it: 0010 and 1100
    Calculate: (0+0+2+0 = 2 = 2) and (8+4+0+0 = 12 = C)
    Result: 2C
C) HexaDecimal to Binary: Just do Trick 2 in reverse.
    Hex to Binary: Convert 2C to Binary.
    2 = 0010
    C (12) = 1100
    Result: 00101100
    */
    int x = 300; // 4 Bytes. Hex: 0x0000012C

    // In Little-Endian memory, it is stored as:
    // Byte 1: 2C (Decimal 44) <- The starting address points here
    // Byte 2: 01 (Decimal 1)
    // Byte 3: 00
    // Byte 4: 00

    char *P; // A pointer that only steps/reads 1 Byte at a time
    P = (char *)&x; // Get address of x, but force it to behave like a 1-Byte pointer

    // Dereferencing P only reads the very first byte (2C)
    printf("%d\n", *P); // Output: 44

    return 0;
}

//Output is 44