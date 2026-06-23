#include <stdio.h>

int main() {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse string
    for(int i = 0; str[i] != '\0'; i++) {

        char ch = str[i];

        // Keep only non-vowels
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {

            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String Without Vowels = %s\n", str);

    return 0;
}