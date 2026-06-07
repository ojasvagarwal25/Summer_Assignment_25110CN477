#include <stdio.h>

// Function to calculate factorial using recursion
long long factorial(int n) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive call
    return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %lld\n", factorial(n));

    return 0;
}