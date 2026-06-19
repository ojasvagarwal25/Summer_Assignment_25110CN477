#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Add diagonal elements
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Diagonal Sum = %d\n", sum);

    return 0;
}