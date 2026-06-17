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

    // Insertion Sort
    for(int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        // Shift larger elements to the right
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert element at correct position
        arr[j + 1] = key;
    }

    printf("Sorted Array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}