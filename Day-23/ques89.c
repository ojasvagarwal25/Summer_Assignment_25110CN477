#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check frequency of every character
    for(int i = 0; str[i] != '\0'; i++) {

        int count = 1;

        if(str[i] == ' ')
            continue;

        // Skip already counted characters
        if(str[i] == '*')
            continue;

        for(int j = i + 1; str[j] != '\0'; j++) {

            if(str[i] == str[j]) {
                count++;
                str[j] = '*';
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}