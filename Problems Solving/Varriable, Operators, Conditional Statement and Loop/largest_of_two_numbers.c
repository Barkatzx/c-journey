#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is the largest number",a);
    }
    else if(b>a)
    {
        printf("%d is the largest number",b);
    }
    else
    {
        printf("Both numbers are equal");
    }
    return 0;
}

/*Explanation: The program takes two integer inputs from the user and compares them using if-else statements. It prints the larger of the two numbers or indicates if they are equal.*/