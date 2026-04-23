/*Logical Operators in C language
1. && (Logical AND)
2. || (Logical OR)
3. ! (Logical NOT) */

#include<stdio.h>
int main() {
    int a = 10, b = 5, c = 15;
    printf("a > b && c > b: %d\n", a > b && c > b); // Logical AND
    printf("a > b || c > b: %d\n", a > b || c > b); // Logical OR
    printf("! (a > b): %d\n", !(a > b)); // Logical NOT
    return 0;
}

/*Important Notes
1. Logical AND (&&) returns 1 if both conditions are true, otherwise 0.
2. Logical OR (||) returns 1 if at least one condition is true, otherwise 0.
3. Logical NOT (!) returns 1 if the condition is false, otherwise 0. */
