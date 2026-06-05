#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        int digit = n % 10; // Extract last digit
        product *= digit;   // Multiply with product
        n /= 10;            // Remove last digit
    }

    printf("Product of digits = %d\n", product);

    return 0;
}