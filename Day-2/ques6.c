#include <stdio.h>

int main() {
    int n, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;           // Get last digit
        reverse = reverse * 10 + digit;
        n /= 10;                      // Remove last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}