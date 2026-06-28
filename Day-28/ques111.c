#include <stdio.h>

int main() {

    int seats[10] = {0};   // 0 = Available, 1 = Booked
    int choice;
    int seatNo;

    do {

        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Display seat status
                printf("\nSeat Status:\n");

                for(int i = 0; i < 10; i++) {

                    if(seats[i] == 0)
                        printf("Seat %d : Available\n", i + 1);
                    else
                        printf("Seat %d : Booked\n", i + 1);
                }

                break;

            case 2:

                // Book a seat
                printf("\nEnter Seat Number (1-10): ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 10) {

                    printf("Invalid Seat Number!\n");
                }
                else if(seats[seatNo - 1] == 1) {

                    printf("Seat Already Booked!\n");
                }
                else {

                    seats[seatNo - 1] = 1;
                    printf("Ticket Booked Successfully!\n");
                }

                break;

            case 3:

                // Cancel booking
                printf("\nEnter Seat Number to Cancel: ");
                scanf("%d", &seatNo);

                if(seatNo < 1 || seatNo > 10) {

                    printf("Invalid Seat Number!\n");
                }
                else if(seats[seatNo - 1] == 0) {

                    printf("Seat is Already Available!\n");
                }
                else {

                    seats[seatNo - 1] = 0;
                    printf("Ticket Cancelled Successfully!\n");
                }

                break;

            case 4:

                printf("\nThank You for Using Ticket Booking System!\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}