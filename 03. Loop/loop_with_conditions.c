#include<stdio.h>
int main()
{
    for(int i=1; i<=10; i++)
    {
        if(i%2 == 0)
        {
            printf("%d is even\n",i);
        }
        else
        {
            printf("%d is odd\n",i);
        }
    }
        
    return 0;
}

/*Explain: This program uses a for loop to iterate through numbers 1 to 10. It checks if each number is even or odd using the modulus operator and prints the appropriate message. */