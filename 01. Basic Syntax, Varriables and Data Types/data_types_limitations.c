/* Limitations of Basic Data Types in C 
Every data type in C has limits because memory is finite. This limit define.....
1. Minimum Value
2. Maximum Value
3. Memory Size

Why Limitations Exist? Because C stores data in binary (bits)
Example..
1 byte = 8 bits. With 8 bits, we can represent values from 0 to 255.*/

// Check limits of data types in C
#include <stdio.h>
#include <limits.h> // For integer limits
#include <float.h>  // For floating-point limits
int main() {
    // Integer limits
    printf("Integer Limits:\n");
    printf("Minimum int: %d\n", INT_MIN);
    printf("Maximum int: %d\n", INT_MAX);
    printf("Size of int: %lu bytes\n\n", sizeof(int));

    // Float limits
    printf("Float Limits:\n");
    printf("Minimum float: %e\n", FLT_MIN);
    printf("Maximum float: %e\n", FLT_MAX);
    printf("Size of float: %lu bytes\n\n", sizeof(float));

    // Double limits
    printf("Double Limits:\n");
    printf("Minimum double: %e\n", DBL_MIN);
    printf("Maximum double: %e\n", DBL_MAX);
    printf("Size of double: %lu bytes\n\n", sizeof(double));

    // Char limits
    printf("Char Limits:\n");
    printf("Minimum char: %d\n", CHAR_MIN);
    printf("Maximum char: %d\n", CHAR_MAX);
    printf("Size of char: %lu bytes\n", sizeof(char));

    return 0;
}

/*Output will show the limits of each data type, which can vary based on the system and compiler.
Note: The limits for data types can differ based on the architecture (32-bit vs 64-bit) and the compiler implementation.
1. If we use long long for integers, we can store larger integer values.
2. If we use double for floating-point numbers, we can store larger values.*/