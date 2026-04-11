/*Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print the "Multiples" or "No Multiples" corresponding to the read numbers.

Examples
Input
9 3
Output
Multiples
Input
6 24
Output
Multiples
Input
12 5
Output
No Multiples
*/

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A % B == 0 || B % A == 0)
    {
        printf("Multiples");
    }
    else
    {
        printf("No Multiples");
    }
    return 0;
}

/*Explaination: This program reads two integers A and B, then checks whether one number is a multiple of the other. It uses the condition A % B == 0 to check if A is divisible by B, or B % A == 0 to check if B is divisible by A. If either condition is true, it prints "Multiples", meaning one number is exactly divisible by the other. Otherwise, it prints "No Multiples".*/