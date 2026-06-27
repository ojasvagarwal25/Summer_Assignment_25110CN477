#include <stdio.h>

int main() {

    char books[100][50];
    int totalBooks = 0;
    int choice;

    do {

        printf("\n===== Library Management =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                // Add book
                printf("Enter Book Name: ");
                scanf("%s", books[totalBooks]);

                totalBooks++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                // Display books
                if(totalBooks == 0) {
                    printf("No Books Available.\n");
                }
                else {

                    printf("\nAvailable Books:\n");

                    for(int i = 0; i < totalBooks; i++) {
                        printf("%d. %s\n", i + 1, books[i]);
                    }
                }

                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}