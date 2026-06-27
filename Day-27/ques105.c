#include <stdio.h>

int main() {
    int roll[100];
    int marks[100];
    int n = 0;
    int choice;
    int searchRoll;
    int found;

    do {
        printf("\n===== Student Record Management =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                // Add a new student
                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                // Display all students
                if(n == 0) {
                    printf("No Records Found.\n");
                }
                else {
                    printf("\nRoll\tMarks\n");

                    for(int i = 0; i < n; i++) {
                        printf("%d\t%d\n", roll[i], marks[i]);
                    }
                }
                break;

            case 3:
                // Search student by roll number
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for(int i = 0; i < n; i++) {

                    if(roll[i] == searchRoll) {
                        printf("Student Found\n");
                        printf("Roll = %d\n", roll[i]);
                        printf("Marks = %d\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Not Found.\n");

                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}