#include <stdio.h>

int main() {
    int age;

    printf("===== Voting Eligibility System =====\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if(age >= 18) {
        printf("You are Eligible to Vote.\n");
    }
    else {
        printf("You are NOT Eligible to Vote.\n");
        printf("You can vote after %d year(s).\n", 18 - age);
    }

    return 0;
}