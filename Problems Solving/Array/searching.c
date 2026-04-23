#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    // Search for x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d\n", i);
            return 0; // stop after first match
        }
    }

    // If not found
    printf("-1\n");

    return 0;
}