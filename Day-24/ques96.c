#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int maxLen = 0;
    int currentLen = 0;
    int start = 0;
    int maxStart = 0;

    for(int i = 0; ; i++) {

        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currentLen++;
        }
        else {

            if(currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = start;
            }

            currentLen = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("Largest Word = ");

    for(int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}