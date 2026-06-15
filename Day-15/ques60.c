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

    int index = 0;

    // Move all non-zero elements forward
    for(int i = 0; i < n; i++) {

        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill remaining positions with zero
    while(index < n) {
        arr[index] = 0;
        index++;
    }

    printf("Array After Moving Zeroes:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}