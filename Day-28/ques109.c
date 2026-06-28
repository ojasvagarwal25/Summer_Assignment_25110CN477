#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    int count = 0;

    int bookId[100];
    char bookName[100][50];
    char author[100][50];

    do {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Add Book
                printf("\nEnter Book ID: ");
                scanf("%d", &bookId[count]);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName[count]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[count]);

                count++;

                printf("\nBook Added Successfully!\n");
                break;

            case 2:

                // Display Books
                if(count == 0) {
                    printf("\nNo Books Available.\n");
                }
                else {

                    printf("\n----------- BOOK LIST -----------\n");

                    for(int i = 0; i < count; i++) {

                        printf("\nBook %d\n", i + 1);
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Book Name : %s\n", bookName[i]);
                        printf("Author : %s\n", author[i]);
                    }
                }

                break;

            case 3: {

                // Search Book
                int id;
                int found = 0;

                printf("\nEnter Book ID to Search: ");
                scanf("%d", &id);

                for(int i = 0; i < count; i++) {

                    if(bookId[i] == id) {

                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Book Name : %s\n", bookName[i]);
                        printf("Author : %s\n", author[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("\nBook Not Found.\n");

                break;
            }

            case 4: {

                // Delete Book
                int id;
                int found = 0;

                printf("\nEnter Book ID to Delete: ");
                scanf("%d", &id);

                for(int i = 0; i < count; i++) {

                    if(bookId[i] == id) {

                        for(int j = i; j < count - 1; j++) {

                            bookId[j] = bookId[j + 1];
                            strcpy(bookName[j], bookName[j + 1]);
                            strcpy(author[j], author[j + 1]);
                        }

                        count--;
                        found = 1;

                        printf("\nBook Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("\nBook Not Found.\n");

                break;
            }

            case 5:

                printf("\nThank You!\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}