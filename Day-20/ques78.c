#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count characters until '\0'
    while(str[length] != '\0') {
        length++;
    }

    printf("Length = %d\n", length);

    return 0;
}