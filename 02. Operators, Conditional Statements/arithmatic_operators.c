/*Arithmetic Operators in C language
1. + (Addition)
2. - (Subtraction)
3. * (Multiplication)
4. / (Division)
5. % (Modulus) */

#include<stdio.h>
int main() {
    int a = 10, b = 5;
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus

    return 0;
}

/*Important Notes
1. Division (/) with integers removes decimal part. Example: 10/3 = 3 not 3.33
2. Modulus (%) works with integers only.
3. For accurate division, use float or double */