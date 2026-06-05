#include <stdio.h>

int main() {
    int n, original, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}