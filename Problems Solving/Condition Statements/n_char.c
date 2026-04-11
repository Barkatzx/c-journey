/*Problem: Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
Note : difference between 'a' and 'A' in ASCII is 32 .
Input
Only one line containing a character X which will be a capital or small letter.

Output:
Print the answer to this problem.

Examples
Input
a
Output
A
Input
A
Output
a*/


#include <stdio.h>

int main() {
    char X;
    scanf("%c", &X);
    if ( X >= 'a' && X <= 'z' )
    {
        X = X - 32;
    }
    else{
        X = X + 32;
    }
    printf("%c", X);
    return 0;
}

/*Explaination: Short and simple explanation:
	•	Read a character X
	•	Check if it is lowercase ('a' to 'z')
	•	If lowercase → subtract 32 → becomes uppercase
	•	Otherwise → add 32 → becomes lowercase
	•	Print the new character

Why 32?
Because in ASCII:
	•	'a' and 'A' differ by 32
	•	So adding/subtracting 32 flips the case 🔄 */