#include <stdio.h>

int main() {

    int answer;
    int score = 0;

    printf("===== C Programming Quiz =====\n\n");

    // Question 1
    printf("Q1. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. ;\n3. .\n4. ,\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    // Question 2
    printf("\nQ2. Which function is used for input in C?\n");
    printf("1. printf()\n2. scanf()\n3. cin\n4. gets()\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    // Question 3
    printf("\nQ3. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    // Question 4
    printf("\nQ4. Which header file contains printf()?\n");
    printf("1. math.h\n2. string.h\n3. stdio.h\n4. stdlib.h\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    // Question 5
    printf("\nQ5. Which data type stores decimal values?\n");
    printf("1. int\n2. char\n3. float\n4. long\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}