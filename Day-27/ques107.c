#include <stdio.h>

int main() {

    int id[100];
    float salary[100];
    int n = 0;
    int choice;

    do {

        printf("\n===== Employee Salary Management =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Add employee
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;

                printf("Employee Added Successfully!\n");
                break;

            case 2:

                // Display employees
                if(n == 0) {
                    printf("No Employee Records.\n");
                }
                else {

                    printf("\nID\tSalary\n");

                    for(int i = 0; i < n; i++) {
                        printf("%d\t%.2f\n", id[i], salary[i]);
                    }
                }

                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}