/*For Loop in C Programming Language
1. int i=1 call it Initialization
2. i<=10 call it Condition
3. i=i+1 call it Update or increment or decrement*/

#include<stdio.h>
int main()
{
    for (int i=1; i<= 10; i=i+1) {
        printf("%d\n", i);
    }
    return 0;
}

//We can also write i++ instead of i=i+1. It is called post increment operator. We can also write ++i instead of i=i+1. It is called pre increment operator. Both will give the same output in this case.

/*We can also do even and odd number with for loop*/

#include<stdio.h>
int main()
{
    printf("Even numbers from 1 to 10:\n");
    for (int i=1; i<=10; i++) {
        if (i%2 == 0) {
            printf("%d\n", i);
        }
    }
    printf("Odd numbers from 1 to 10:\n");
    for (int i=1; i<=10; i++) {
        if (i%2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}