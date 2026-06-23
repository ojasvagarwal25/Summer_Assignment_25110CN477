#include <stdio.h>

int main() {
    char str[100];
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check every character
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        int count = 0;

        for(int j = 0; str[j] != '\0' && str[j] != '\n'; j++) {

            if(str[i] == str[j]) {
                count++;
            }
        }

        // First character with frequency 1
        if(count == 1) {
            printf("First Non-Repeating Character = %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("No Non-Repeating Character Found\n");
    }

    return 0;
}