#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int left = 0;
    int right = length - 1;

    // Swap characters
    while(left < right) {

        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Reversed String = %s\n", str);

    return 0;
}