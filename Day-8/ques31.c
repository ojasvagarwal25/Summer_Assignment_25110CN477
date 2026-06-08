#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {

        // Print characters from A onwards
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}