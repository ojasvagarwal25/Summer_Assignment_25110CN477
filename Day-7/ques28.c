#include <stdio.h>

int reverse = 0;

// Function to reverse a number
int reverseNumber(int n) {

    // Base case
    if (n == 0)
        return reverse;

    // Add last digit to reversed number
    reverse = reverse * 10 + (n % 10);

    // Recursive call
    return reverseNumber(n / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed Number = %d\n", reverseNumber(n));

    return 0;
}