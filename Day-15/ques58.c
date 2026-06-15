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

    // Store first element
    int first = arr[0];

    // Shift all elements left
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place first element at end
    arr[n - 1] = first;

    printf("Left Rotated Array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}