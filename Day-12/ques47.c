#include <stdio.h>

// Function to find nth Fibonacci term
int fibonacci(int n) {

    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    int a = 0;
    int b = 1;
    int c;

    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci Term = %d\n", fibonacci(n));

    return 0;
}