#include <stdio.h>
#include <string.h>

int main() {

    int choice;
    int count = 0;

    char name[100][50];
    char phone[100][20];

    do {

        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Add Contact
                printf("\nEnter Name: ");
                scanf(" %[^\n]", name[count]);

                printf("Enter Phone Number: ");
                scanf("%s", phone[count]);

                count++;

                printf("\nContact Added Successfully!\n");
                break;

            case 2:

                // Display All Contacts
                if(count == 0) {
                    printf("\nNo Contacts Available.\n");
                }
                else {

                    printf("\n========== CONTACT LIST ==========\n");

                    for(int i = 0; i < count; i++) {

                        printf("\nContact %d\n", i + 1);
                        printf("Name  : %s\n", name[i]);
                        printf("Phone : %s\n", phone[i]);
                    }
                }

                break;

            case 3: {

                // Search Contact
                char searchName[50];
                int found = 0;

                printf("\nEnter Name to Search: ");
                scanf(" %[^\n]", searchName);

                for(int i = 0; i < count; i++) {

                    if(strcmp(name[i], searchName) == 0) {

                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", name[i]);
                        printf("Phone : %s\n", phone[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("\nContact Not Found!\n");

                break;
            }

            case 4: {

                // Delete Contact
                char deleteName[50];
                int found = 0;

                printf("\nEnter Name to Delete: ");
                scanf(" %[^\n]", deleteName);

                for(int i = 0; i < count; i++) {

                    if(strcmp(name[i], deleteName) == 0) {

                        // Shift remaining contacts
                        for(int j = i; j < count - 1; j++) {

                            strcpy(name[j], name[j + 1]);
                            strcpy(phone[j], phone[j + 1]);
                        }

                        count--;
                        found = 1;

                        printf("\nContact Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("\nContact Not Found!\n");

                break;
            }

            case 5:

                printf("\nThank You for Using Contact Management System!\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}