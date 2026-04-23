/*Take an array from input and print the minimum value in that array.
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
    // Find and print the minimum value in the array
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum value in the array: %d\n", min);
    return 0;
}