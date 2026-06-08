#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {

        // Inner loop for stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}