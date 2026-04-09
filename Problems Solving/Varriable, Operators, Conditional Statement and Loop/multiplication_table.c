#include<stdio.h>
int main()
{   int num;
    scanf("%d",&num);
    for(int i=1;i<=10;i++)    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}
/*Explanation: This program generates the multiplication table for a given number. The user inputs a number, and the program prints the multiplication results from 1 to 10 for that number. */