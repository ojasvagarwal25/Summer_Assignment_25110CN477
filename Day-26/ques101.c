#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;

    // Generate random number between 1 and 100
    srand(time(NULL));
    randomNumber = rand() % 100 + 1;

    printf("===== Number Guessing Game =====\n");
    printf("Guess a number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > randomNumber) {
            printf("Too High! Try Again.\n");
        }
        else if (guess < randomNumber) {
            printf("Too Low! Try Again.\n");
        }
        else {
            printf("\nCongratulations!\n");
            printf("You guessed the correct number.\n");
            printf("Total Attempts = %d\n", attempts);
        }

    } while (guess != randomNumber);

    return 0;
}