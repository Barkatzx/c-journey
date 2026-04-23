/*Take an array from input and print the maximum value in that array.
*/

#include <stdio.h>

int main() {
    int n;
    // Take array size as input
    scanf("%d", &n);
    int arr[n];
    // Take array elements as input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Find and print the maximum value in the array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum value in the array: %d\n", max);
    return 0;
}