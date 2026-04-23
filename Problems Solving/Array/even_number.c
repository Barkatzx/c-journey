/*Take an array from input and print all the even numbers of that array.
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
    // Print even numbers from the array
    printf("Even numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}