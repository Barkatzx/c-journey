#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}

/*Explaination: The program takes an integer input from the user and checks if it is even or odd using the modulo operator (%). If the remainder when divided by 2 is 0, the number is even; otherwise, it is odd.*/