#include <stdio.h>

int main() {
    int n;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp[n];
    int j = 0;

    // Store first element
    temp[j++] = arr[0];

    // Store only unique elements
    for(int i = 1; i < n; i++) {

        if(arr[i] != arr[i - 1]) {
            temp[j++] = arr[i];
        }
    }

    printf("Array After Removing Duplicates:\n");

    for(int i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}