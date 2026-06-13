#include <stdio.h>

int main() {
    int n;
    int even = 0;
    int odd = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(int i = 0; i < n; i++) {

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d\n", odd);

    return 0;
}