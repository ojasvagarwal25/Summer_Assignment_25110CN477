#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Traverse string
    while(str[i] != '\0') {

        char ch = str[i];

        // Check vowels
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {

            vowels++;
        }

        // Check consonants
        else if((ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z')) {

            consonants++;
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}