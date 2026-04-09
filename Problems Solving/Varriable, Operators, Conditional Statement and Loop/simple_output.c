/*This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.

Example
The required output is:
Hello, World!  
Life is beautiful */


#include<stdio.h>
int main()
{   char s[100];
    scanf("%[^\n]", s);
    printf("Hello, World!\n");
    printf("%s\n", s);
    return 0;
}
/*Explanation: This program reads a line of input from the user and stores it in the character array 's'. The scanf() function with the format specifier %[^\n] allows us to read a string that includes spaces until a newline character is encountered. The program then prints "Hello, World!" followed by the input string on separate lines. The \n character is used to create a new line after each print statement. */