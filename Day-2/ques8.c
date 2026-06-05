#include <stdio.h>

int main() {
    int n, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (original == reverse) {
        printf("Palindrome Number\n");
    } else {
        printf("Not a Palindrome Number\n");
    }

    return 0;
}