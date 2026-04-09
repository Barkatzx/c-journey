#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    return 0;
}

/*Explanation: The program takes two integer inputs from the user and performs basic arithmetic operations (addition, subtraction, multiplication, and division) on them. It then prints the results of these operations. Note that the division operation will perform integer division since both operands are integers.*/