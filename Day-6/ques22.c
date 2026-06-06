#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0;
    int base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Process each binary digit
    while (binary > 0) {

        int lastDigit = binary % 10;

        decimal += lastDigit * base;

        base *= 2;

        binary /= 10;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}