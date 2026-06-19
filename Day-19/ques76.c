#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Lower Triangular Matrix:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            // Print only lower triangle
            if(i >= j)
                printf("%d ", matrix[i][j]);
            else
                printf("0 ");
        }

        printf("\n");
    }

    return 0;
}