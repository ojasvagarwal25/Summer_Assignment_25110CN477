#include <stdio.h>

int main() {
    int n;
    int largestPrimeFactor = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check every factor
    for (int i = 2; i <= n; i++) {

        if (n % i == 0) {

            int isPrime = 1;

            // Check if factor is prime
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime) {
                largestPrimeFactor = i;
            }
        }
    }

    printf("Largest Prime Factor = %d\n", largestPrimeFactor);

    return 0;
}