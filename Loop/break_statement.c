#include<stdio.h>
int main() {
    for (int i = 1; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        printf("%d\n ", i); // Print the current value of i
    }
    return 0;
}

/*Explanation: This program demonstrates the use of the break statement in a for loop. The loop iterates from 1 to 9, but when i equals 5, the break statement is executed, causing the loop to terminate early.*/