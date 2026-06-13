#include <stdio.h>

// Function to check palindrome
int isPalindrome(int n) {

    int original = n;
    int reverse = 0;

    while(n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPalindrome(n))
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}