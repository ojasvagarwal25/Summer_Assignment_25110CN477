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

    int largest = arr[0];
    int secondLargest = arr[0];

    // Find largest and second largest
    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest = %d\n", secondLargest);

    return 0;
}