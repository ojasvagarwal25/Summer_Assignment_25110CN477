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

    // Selection Sort
    for(int i = 0; i < n - 1; i++) {

        int minIndex = i;

        // Find smallest element
        for(int j = i + 1; j < n; j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap smallest element with current position
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted Array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}