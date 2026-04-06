/*Relational Operators in C language
1. == (Equal to)
2. != (Not equal to)
3. < (Less than)
4. > (Greater than)
5. <= (Less than or equal to)
6. >= (Greater than or equal to) */

#include<stdio.h>
int main() {
    int a = 10, b = 5;
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);

    return 0;
}

/*Output:
a == b: 0 (False)
a != b: 1 (True)
a < b: 0 (False)
a > b: 1 (True)
a <= b: 0 (False)
a >= b: 1 (True)
*/
