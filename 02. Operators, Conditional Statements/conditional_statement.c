/*Conditional Statement in C language
1. if statement
2. if-else statement
3. if-else if-else statement */

// if Statement:
#include<stdio.h>
int main() {
    int a = 10, b = 5;
    if (a > b) {
        printf("a is greater than b\n");
    }
    return 0;
}

// if-else Statement:
#include<stdio.h>
int main() {
    int a = 10, b = 15;
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("b is not greater than a\n");
    }
    return 0;   
}

// if-else if-else Statement:
#include<stdio.h>
int main() {
    int a = 10, b = 10;
    if (a > b) {
        printf("b is greater than a\n");
    } else if (a < b) {
        printf("a is less than b\n");
    } else {
        printf("a and b are equal\n");
    }
    return 0;
}

//Nested if-else Statement:
#include<stdio.h>
int main() {
    int a = 10, b = 5, c = 15;
    if (a > b) {
        if (a > c) {
            printf("a is the greatest number\n");
        } else {
            printf("c is the greatest number\n");
        }
    } else {
        if (b > c) {
            printf("b is the greatest number\n");
        } else {
            printf("c is the greatest number\n");
        }
    }
    return 0;
}