#include <stdio.h>

int main() {

    int rooms[20]={0};   // 0 = Available, 1 = Booked
    int choice;
    int roomNo;

    do{

        printf("\n========== HOTEL MANAGEMENT SYSTEM ==========\n");
        printf("1. View Rooms\n");
        printf("2. Book Room\n");
        printf("3. Checkout Room\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:

                // Display Room Status
                printf("\n------ ROOM STATUS ------\n");

                for(int i=0;i<20;i++){

                    if(rooms[i]==0)
                        printf("Room %2d : Available\n",i+1);
                    else
                        printf("Room %2d : Booked\n",i+1);
                }

                break;

            case 2:

                // Book Room
                printf("Enter Room Number (1-20): ");
                scanf("%d",&roomNo);

                if(roomNo<1 || roomNo>20){

                    printf("Invalid Room Number.\n");
                }
                else if(rooms[roomNo-1]==1){

                    printf("Room Already Booked.\n");
                }
                else{

                    rooms[roomNo-1]=1;
                    printf("Room Booked Successfully.\n");
                }

                break;

            case 3:

                // Checkout Room
                printf("Enter Room Number: ");
                scanf("%d",&roomNo);

                if(roomNo<1 || roomNo>20){

                    printf("Invalid Room Number.\n");
                }
                else if(rooms[roomNo-1]==0){

                    printf("Room is Already Available.\n");
                }
                else{

                    rooms[roomNo-1]=0;
                    printf("Checkout Successful.\n");
                }

                break;

            case 4:

                printf("\nThank You!\n");
                break;

            default:

                printf("Invalid Choice.\n");
        }

    }while(choice!=4);

    return 0;
}