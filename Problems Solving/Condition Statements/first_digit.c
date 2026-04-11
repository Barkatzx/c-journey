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


// Solution: 1 First Digit
#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    int firstDigit = X / 1000;
    if(firstDigit % 2 == 0) 
    {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }
    return 0;
}

// Solution: 2
#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    while ( X >= 10) 
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

/*Explaination: This program reads an integer X and extracts its first digit by dividing it by 1000 (assuming it is a 4-digit number, If it will 3 digit simple we give 3 2 zero after 1.). Then it checks whether that first digit is even or odd using the modulus operator % 2. If the remainder is 0, it prints "EVEN", otherwise it prints "ODD".*/