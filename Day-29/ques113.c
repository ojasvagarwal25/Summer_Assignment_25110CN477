#include <stdio.h>
#include <string.h>

int main() {

    int choice;
    int count = 0;

    int empId[100];
    char empName[100][50];
    float salary[100];

    do {

        printf("\n========== EMPLOYEE RECORD SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Add Employee
                printf("Enter Employee ID: ");
                scanf("%d", &empId[count]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", empName[count]);

                printf("Enter Salary: ");
                scanf("%f", &salary[count]);

                count++;

                printf("\nEmployee Added Successfully!\n");
                break;

            case 2:

                // Display Employees
                if(count == 0) {
                    printf("\nNo Records Found.\n");
                }
                else {

                    printf("\n------ EMPLOYEE LIST ------\n");

                    for(int i = 0; i < count; i++) {

                        printf("\nEmployee %d\n", i + 1);
                        printf("ID     : %d\n", empId[i]);
                        printf("Name   : %s\n", empName[i]);
                        printf("Salary : %.2f\n", salary[i]);
                    }
                }

                break;

            case 3: {

                // Search Employee
                int id;
                int found = 0;

                printf("Enter Employee ID: ");
                scanf("%d", &id);

                for(int i = 0; i < count; i++) {

                    if(empId[i] == id) {

                        printf("\nEmployee Found\n");
                        printf("ID     : %d\n", empId[i]);
                        printf("Name   : %s\n", empName[i]);
                        printf("Salary : %.2f\n", salary[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee Not Found.\n");

                break;
            }

            case 4: {

                // Delete Employee
                int id;
                int found = 0;

                printf("Enter Employee ID to Delete: ");
                scanf("%d", &id);

                for(int i = 0; i < count; i++) {

                    if(empId[i] == id) {

                        for(int j = i; j < count - 1; j++) {

                            empId[j] = empId[j + 1];
                            strcpy(empName[j], empName[j + 1]);
                            salary[j] = salary[j + 1];
                        }

                        count--;

                        printf("Employee Deleted Successfully.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee Not Found.\n");

                break;
            }

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}