#include <stdio.h>

int main() {

    int seats[30] = {0};   // 0 = Available, 1 = Reserved
    int choice;
    int seatNo;

    do {

        printf("\n========== BUS RESERVATION SYSTEM ==========\n");
        printf("1. View Seat Status\n");
        printf("2. Reserve Seat\n");
        printf("3. Cancel Reservation\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Display all seats
                printf("\n------ SEAT STATUS ------\n");

                for(int i = 0; i < 30; i++) {

                    printf("Seat %2d : %s\n",
                           i + 1,
                           seats[i] ? "Reserved" : "Available");
                }

                break;

            case 2:

                // Reserve seat
                printf("Enter Seat Number (1-30): ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 30) {

                    printf("Invalid Seat Number.\n");
                }
                else if(seats[seatNo - 1]) {

                    printf("Seat Already Reserved.\n");
                }
                else {

                    seats[seatNo - 1] = 1;
                    printf("Seat Reserved Successfully.\n");
                }

                break;

            case 3:

                // Cancel reservation
                printf("Enter Seat Number: ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 30) {

                    printf("Invalid Seat Number.\n");
                }
                else if(seats[seatNo - 1] == 0) {

                    printf("Seat is Already Available.\n");
                }
                else {

                    seats[seatNo - 1] = 0;
                    printf("Reservation Cancelled Successfully.\n");
                }

                break;

            case 4:

                printf("\nThank You!\n");
                break;

            default:

                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}