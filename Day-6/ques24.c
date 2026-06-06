#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base and power: ");
    scanf("%d %d", &x, &n);

    // Multiply x, n times
    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    printf("%lld\n", result);

    return 0;
}