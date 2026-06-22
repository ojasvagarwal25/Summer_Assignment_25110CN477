#include <stdio.h>

int main() {
    char str[200];
    int words = 1;
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count spaces
    while(str[i] != '\0') {

        if(str[i] == ' ') {
            words++;
        }

        i++;
    }

    printf("Number of Words = %d\n", words);

    return 0;
}