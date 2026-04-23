#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    scanf("%d", &x);

    int min = x;
    int pos = 1;  // 1-based index

    for (int i = 2; i <= n; i++) {
        scanf("%d", &x);

        if (x < min) {
            min = x;
            pos = i;
        }
    }

    printf("%d %d\n", min, pos);

    return 0;
}