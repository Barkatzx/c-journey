#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int A[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &A[i]);
    }

    int start;
    if ((a - 1) % 2 == 0)
    {
        start = a - 2;
    }
    else
    {
        start = a - 1;
    }

    for (int i = start; i >= 1; i -= 2)
    {
        printf("%d ", A[i]);
    }

    return 0;
}