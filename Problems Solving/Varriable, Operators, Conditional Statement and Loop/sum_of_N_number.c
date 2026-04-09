#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
/*Explanation: This program calculates the sum of natural numbers from 1 to n. n is the input provided by the user. It uses a for loop to iterate from 1 to n and adds each number to the sum. It then prints the result. */