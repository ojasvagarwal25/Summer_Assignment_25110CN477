#include <stdio.h>

int main() {
    int n, key;
    int count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element: ");
    scanf("%d", &key);

    // Count occurrences
    for(int i = 0; i < n; i++) {

        if(arr[i] == key) {
            count++;
        }
    }

    printf("Frequency = %d\n", count);

    return 0;
}