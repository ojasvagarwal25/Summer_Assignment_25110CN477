#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are:\n");

    for (int num = start; num <= end; num++) {
        int isPrime = 1;

        if (num <= 1)
            isPrime = 0;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", num);
    }

    return 0;
}