#include <stdio.h>

int main() {
    int n, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Process each digit
    while (n != 0) {

        int digit = n % 10;

        // Find factorial of digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    // Check Strong Number
    if (sum == original)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    return 0;
}