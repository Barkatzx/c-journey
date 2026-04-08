/*
Multiple or not
Time Limit: 1 Seconds
Memory Limit: 2.93 MB

Statement
In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a). 

Constraints
 1 <= a, b <= 10000

Input format
 Input will contain two integers a, b.
Output Format
Print "Yes" if one is the multiple of the other and "No" otherwise.

Sample Input 1
5 9
Sample Output 1
No
*/


#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a % b == 0 || b % a == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}

/*
Explanation:
In the above code, we first read the two integers a and b from the input. Then we check if a is a multiple of b by checking if the remainder of a divided by b is zero (a % b == 0). We also check if b is a multiple of a by checking if the remainder of b divided by a is zero (b % a == 0). If either of these conditions is true, we print "Yes". Otherwise, we print "No".
*/