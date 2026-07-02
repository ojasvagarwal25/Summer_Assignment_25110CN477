#include <stdio.h>
#include <string.h>

int main() {

    int choice;
    int count = 0;

    int roll[100];
    char name[100][50];
    float marks[100];

    do {

        printf("\n========== STUDENT RECORD SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:

                printf("\nEnter Roll Number: ");
                scanf("%d",&roll[count]);

                printf("Enter Name: ");
                scanf(" %[^\n]",name[count]);

                printf("Enter Marks: ");
                scanf("%f",&marks[count]);

                count++;

                printf("\nStudent Added Successfully!\n");
                break;

            case 2:

                if(count==0){
                    printf("\nNo Records Found.\n");
                }
                else{

                    printf("\n------ STUDENT LIST ------\n");

                    for(int i=0;i<count;i++){

                        printf("\nStudent %d\n",i+1);
                        printf("Roll No : %d\n",roll[i]);
                        printf("Name    : %s\n",name[i]);
                        printf("Marks   : %.2f\n",marks[i]);
                    }
                }

                break;

            case 3:{

                int searchRoll;
                int found=0;

                printf("Enter Roll Number: ");
                scanf("%d",&searchRoll);

                for(int i=0;i<count;i++){

                    if(roll[i]==searchRoll){

                        printf("\nStudent Found\n");
                        printf("Roll No : %d\n",roll[i]);
                        printf("Name    : %s\n",name[i]);
                        printf("Marks   : %.2f\n",marks[i]);

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("\nStudent Not Found.\n");

                break;
            }

            case 4:{

                int deleteRoll;
                int found=0;

                printf("Enter Roll Number to Delete: ");
                scanf("%d",&deleteRoll);

                for(int i=0;i<count;i++){

                    if(roll[i]==deleteRoll){

                        for(int j=i;j<count-1;j++){

                            roll[j]=roll[j+1];
                            strcpy(name[j],name[j+1]);
                            marks[j]=marks[j+1];
                        }

                        count--;

                        printf("\nRecord Deleted Successfully.\n");

                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("\nStudent Not Found.\n");

                break;
            }

            case 5:

                printf("\nThank You!\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    }while(choice!=5);

    return 0;
}