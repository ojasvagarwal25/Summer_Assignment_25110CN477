#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {

        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for(int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}