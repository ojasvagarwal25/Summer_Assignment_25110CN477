#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        int digit = n % 10; // Extract last digit
        sum += digit;       // Add digit to sum
        n /= 10;            // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}