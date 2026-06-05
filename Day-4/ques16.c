#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers:\n");

    for (int num = start; num <= end; num++) {

        int temp = num;
        int sum = 0;

        while (temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}