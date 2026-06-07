#include <stdio.h>

// Function to find sum of digits
int sumDigits(int n) {

    // Base case
    if (n == 0)
        return 0;

    // Recursive call
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of Digits = %d\n", sumDigits(n));

    return 0;
}