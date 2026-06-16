#include <stdio.h>

int main() {
    int n, key;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;

    // Binary Search
    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }

        else if(arr[mid] < key) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}