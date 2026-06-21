#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str1);

    // Copy characters one by one
    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    // Add null character at end
    str2[i] = '\0';

    printf("Copied String = %s\n", str2);

    return 0;
}