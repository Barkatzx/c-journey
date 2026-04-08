#include<stdio.h>
int main () {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

/*Explanation: This program demonstrates the use of the continue statement in a for loop. The loop iterates from 1 to 10, but when i equals 5, the continue statement is executed, causing the loop to skip the rest of the code for that iteration and move to the next one.*/