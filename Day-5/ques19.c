#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are:\n");

    // Check every number from 1 to n
    for (int i = 1; i <= n; i++) {

        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}