#include<stdio.h>
int main() {
    int a = 10; // Integer data type
    float b = 3.14; // Floating-point data type
    char c = 'A'; // Character data type
    double d = 2.71828; // Double-precision floating-point data type

    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.5lf\n", d);

    return 0;
}

/*Basic data types in C
1. int - Integer (Example: 10, -5, 0)
2. float - Floating-point (Example: 3.14, -0.001, 2.71828)
3. char - Character (Example: 'A', 'b', '1')
4. double - Double-precision floating-point  (Example: 3.14159, -0.00001, 2.718281828)
5. Bool - Boolean (Example: true, false) [But for this we need to include stdbool.h header file]
*/