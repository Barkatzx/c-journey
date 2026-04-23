/*Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1.

Examples
InputCopy
10
OutputCopy
2
4
6
8
10
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1) 
    {
        printf("-1");
    }
    else 
    {
        for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    }
    
    return 0;
}

/*Explaination: The program first checks if n < 2. If true, it prints -1 because no even numbers exist. Otherwise, it runs a loop from 2 to n with step 2, printing all even numbers.*/