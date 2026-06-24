#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0};
    int freq2[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int i = 0;

    // Count frequency of first string
    while(str1[i] != '\0') {
        freq1[(int)str1[i]]++;
        i++;
    }

    i = 0;

    // Count frequency of second string
    while(str2[i] != '\0') {
        freq2[(int)str2[i]]++;
        i++;
    }

    int isAnagram = 1;

    for(i = 0; i < 256; i++) {

        if(freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("Strings are Anagrams\n");
    else
        printf("Strings are Not Anagrams\n");

    return 0;
}