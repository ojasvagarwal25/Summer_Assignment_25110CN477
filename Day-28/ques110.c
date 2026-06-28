#include <stdio.h>

int main() {
    int choice;
    int accountNo[100];
    char name[100][50];
    float balance[100];
    int count = 0;
    int accNo;
    float amount;

    do {
        printf("\n========== BANK ACCOUNT SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Create New Account
                printf("\nEnter Account Number: ");
                scanf("%d", &accountNo[count]);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", name[count]);

                printf("Enter Initial Balance: ");
                scanf("%f", &balance[count]);

                count++;

                printf("\nAccount Created Successfully!\n");
                break;

            case 2:

                // Deposit Money
                printf("\nEnter Account Number: ");
                scanf("%d", &accNo);

                for(int i = 0; i < count; i++) {

                    if(accountNo[i] == accNo) {

                        printf("Enter Amount to Deposit: ");
                        scanf("%f", &amount);

                        if(amount > 0) {
                            balance[i] += amount;
                            printf("Deposit Successful!\n");
                            printf("Updated Balance = %.2f\n", balance[i]);
                        }
                        else {
                            printf("Invalid Amount!\n");
                        }

                        break;
                    }

                    if(i == count - 1)
                        printf("Account Not Found!\n");
                }

                break;

            case 3:

                // Withdraw Money
                printf("\nEnter Account Number: ");
                scanf("%d", &accNo);

                for(int i = 0; i < count; i++) {

                    if(accountNo[i] == accNo) {

                        printf("Enter Amount to Withdraw: ");
                        scanf("%f", &amount);

                        if(amount <= balance[i] && amount > 0) {

                            balance[i] -= amount;

                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance = %.2f\n", balance[i]);
                        }
                        else {

                            printf("Insufficient Balance or Invalid Amount!\n");
                        }

                        break;
                    }

                    if(i == count - 1)
                        printf("Account Not Found!\n");
                }

                break;

            case 4:

                // Check Balance
                printf("\nEnter Account Number: ");
                scanf("%d", &accNo);

                for(int i = 0; i < count; i++) {

                    if(accountNo[i] == accNo) {

                        printf("\nAccount Number : %d\n", accountNo[i]);
                        printf("Account Holder : %s\n", name[i]);
                        printf("Current Balance : %.2f\n", balance[i]);

                        break;
                    }

                    if(i == count - 1)
                        printf("Account Not Found!\n");
                }

                break;

            case 5:

                // Display All Accounts
                if(count == 0) {

                    printf("\nNo Accounts Available.\n");
                }
                else {

                    printf("\n========== ACCOUNT DETAILS ==========\n");

                    for(int i = 0; i < count; i++) {

                        printf("\nAccount %d\n", i + 1);
                        printf("Account No : %d\n", accountNo[i]);
                        printf("Name       : %s\n", name[i]);
                        printf("Balance    : %.2f\n", balance[i]);
                    }
                }

                break;

            case 6:

                printf("\nThank You for Using Bank Account System!\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}