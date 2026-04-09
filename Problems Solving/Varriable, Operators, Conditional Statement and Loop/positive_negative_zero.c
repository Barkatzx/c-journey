#include<stdio.h>
int main()
{    int num;
    scanf("%d", &num);
    if(num > 0)
    {
        printf("Positive");
    }
    else if(num < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}

/*Explanation: The program takes an integer input from the user and checks if it is positive, negative, or zero using if-else statements. It prints the corresponding message.*/