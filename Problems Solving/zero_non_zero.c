/*
Problem Title: Zero or Non Zero
==================================
Time Limit: 1 second
Memory Limit: 2.93 MB
Problem Statement:
You are given an integer number N.
	•	Print “Zero” if the value of N is equal to 0.
	•	Otherwise, print “Non Zero”.

Constraints
-1000 ≤ N ≤ 1000

Input Format
The input consists of a single integer N.
Output Format
Print “Zero” if N equals 0. Otherwise, print “Non Zero”.

Sample Input
5
Sample Output
Non Zero
*/

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non Zero");
    }
    return 0;
}

/*Explaination: The program takes an integer input N and checks if it is equal to 0. If true, it prints "Zero"; otherwise, it prints "Non Zero".*/