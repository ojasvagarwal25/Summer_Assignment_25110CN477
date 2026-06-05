#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("%d", a);
    }
    else if (n == 2) {
        printf("%d", b);
    }
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        printf("%d", b);
    }

    return 0;
}