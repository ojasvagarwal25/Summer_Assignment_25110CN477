#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while(str[length] != '\0') {
        length++;
    }

    int left = 0;
    int right = length - 1;

    // Compare characters from both ends
    while(left < right) {

        if(str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if(isPalindrome)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}