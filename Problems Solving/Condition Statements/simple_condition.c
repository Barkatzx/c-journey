/*Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.

Examples
Input
10 9
Output
Yes
Input
5 5
Output
Yes
Input
5 7
Output
No
*/

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A >= B) 
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

/*Explaination: This program reads two integers A and B, then compares them. If A is greater than or equal to B, it prints "Yes", otherwise it prints "No". Basically, it checks whether A is not smaller than B.*/