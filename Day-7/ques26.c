#include <stdio.h>

// Function to find nth Fibonacci term
int fibonacci(int n) {

    // Base cases
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // Recursive calls
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci Term = %d\n", fibonacci(n));

    return 0;
}