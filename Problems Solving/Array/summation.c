#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = 0;  // safer for large constraints

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Take absolute value of the sum
    if (sum < 0) {
        sum = -sum;
    }

    printf("%lld\n", sum);

    return 0;
}