#include <stdio.h>

int main() {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Move non-space characters forward
    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] != ' ' && str[i] != '\n') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String After Removing Spaces = %s\n", str);

    return 0;
}