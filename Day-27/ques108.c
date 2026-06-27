#include <stdio.h>

int main() {

    float balance = 5000.0;
    float amount;
    int choice;

    do {

        printf("\n===== Simple Banking System =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Display balance
                printf("Current Balance = %.2f\n", balance);
                break;

            case 2:

                // Deposit money
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    balance += amount;
                    printf("Deposit Successful!\n");
                }
                else {
                    printf("Invalid Amount.\n");
                }

                break;

            case 3:

                // Withdraw money
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else {
                    printf("Insufficient Balance or Invalid Amount.\n");
                }

                break;

            case 4:
                printf("Thank You for Banking With Us!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}