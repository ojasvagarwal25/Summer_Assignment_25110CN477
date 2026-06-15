#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store last element
    int last = arr[n - 1];

    // Shift elements right
    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place last element at first position
    arr[0] = last;

    printf("Right Rotated Array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}