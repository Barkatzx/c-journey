/*Problem: Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
Input
1 2 3
Output
1 3
Input
-1 -2 -3
Output
-3 -1
Input
10 20 -5
Output
-5 20*/


// Solution: 1

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else if (c <= a && c <= b)
    {
        printf("%d ", c);
    }

    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else if (c >= a && c >= b)
    {
        printf("%d", c);
    }
    return 0;
}

// Solution: 2
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = a;
    int max = a;

    if (b < min) min = b;
    if (c < min) min = c;

    if (b > max) max = b;
    if (c > max) max = c;

    printf("%d %d", min, max);

    return 0;
}

/*Explaination: Set min and max to a first. Then compare b and c with them—update min if you find a smaller number, and update max if you find a larger number. Finally, print min and max. This way, it works for all cases, including equal numbers.*/