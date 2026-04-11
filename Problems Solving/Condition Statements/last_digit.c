#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int lastDigit = a % 10;
    if (lastDigit % 2 == 0) 
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}

/*Explaination: To get the last digit of a number, we use mod 10 because it removes all digits except the last one. Then we check if that digit is even or odd using % 2.*/