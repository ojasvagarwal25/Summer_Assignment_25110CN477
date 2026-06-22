#include <stdio.h>

int main() {
    char str[200];
    int alphabets = 0;
    int digits = 0;
    int special = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse string
    while(str[i] != '\0') {

        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z')) {

            alphabets++;
        }

        else if(ch >= '0' && ch <= '9') {

            digits++;
        }

        else if(ch != ' ' && ch != '\n') {

            special++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}