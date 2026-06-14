#include <stdio.h>

int main() {
    int n, key;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Search element one by one
    for(int i = 0; i < n; i++) {

        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    // Element not found
    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}