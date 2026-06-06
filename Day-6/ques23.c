#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Count number of 1s in binary form
    while (n > 0) {

        if (n % 2 == 1) {
            count++;
        }

        n = n / 2;
    }

    printf("Set Bits = %d\n", count);

    return 0;
}