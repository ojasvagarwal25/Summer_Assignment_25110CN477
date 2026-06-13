#include <stdio.h>

// Function to check Armstrong Number
int isArmstrong(int n) {

    int original = n;
    int sum = 0;

    while(n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}