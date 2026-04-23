#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    int pos_sum = 0;
    int neg_sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x > 0)
        {
            pos_sum += x;
        }
        else if (x < 0)
        {
            neg_sum += x;
        }
    }

    printf("%d %d", pos_sum, neg_sum);

    return 0;
}