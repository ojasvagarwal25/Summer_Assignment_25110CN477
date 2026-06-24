#include <stdio.h>

int main() {
    char str[100];
    char sub[50];
    int count = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    for(int i = 0; str[i] != '\0'; i++) {

        int j;

        for(j = 0; sub[j] != '\0'; j++) {

            if(str[i + j] != sub[j]) {
                break;
            }
        }

        if(sub[j] == '\0') {
            count++;
        }
    }

    printf("Occurrences = %d\n", count);

    return 0;
}