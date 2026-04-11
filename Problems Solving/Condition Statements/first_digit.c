/*Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".

Examples
Input
4569
Output
EVEN
Input
3569
Output
ODD
Note
Second Example :
In 3569 the first digit is 3 and its ODD.*/

#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    while (X >= 10)
    {
        X /= 10;
    }
    if(X % 2 == 0) 
    {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    return 0;
}

/*Explaination: This program takes an integer X, then repeatedly divides it by 10 until only the first digit remains. After extracting the first digit, it checks whether that digit is even or odd using the modulus operator % 2. If the remainder is 0, it prints “EVEN”; otherwise it prints “ODD”.*/