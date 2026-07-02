#include <stdio.h>
#include <string.h>

int main() {

    int choice;
    int count=0;

    int bookId[100];
    char title[100][50];
    char author[100][50];
    int issued[100]={0};

    do{

        printf("\n========== MINI LIBRARY SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:

                printf("\nEnter Book ID: ");
                scanf("%d",&bookId[count]);

                printf("Enter Book Title: ");
                scanf(" %[^\n]",title[count]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]",author[count]);

                issued[count]=0;

                count++;

                printf("\nBook Added Successfully!\n");

                break;

            case 2:

                if(count==0){

                    printf("\nNo Books Available.\n");
                }

                else{

                    printf("\n------- BOOK LIST -------\n");

                    for(int i=0;i<count;i++){

                        printf("\nBook %d\n",i+1);
                        printf("ID     : %d\n",bookId[i]);
                        printf("Title  : %s\n",title[i]);
                        printf("Author : %s\n",author[i]);

                        if(issued[i])
                            printf("Status : Issued\n");
                        else
                            printf("Status : Available\n");
                    }
                }

                break;

            case 3:{

                int id;
                int found=0;

                printf("Enter Book ID: ");
                scanf("%d",&id);

                for(int i=0;i<count;i++){

                    if(bookId[i]==id){

                        found=1;

                        if(issued[i]){

                            printf("Book Already Issued.\n");
                        }
                        else{

                            issued[i]=1;
                            printf("Book Issued Successfully.\n");
                        }

                        break;
                    }
                }

                if(found==0)
                    printf("Book Not Found.\n");

                break;
            }

            case 4:{

                int id;
                int found=0;

                printf("Enter Book ID: ");
                scanf("%d",&id);

                for(int i=0;i<count;i++){

                    if(bookId[i]==id){

                        found=1;

                        if(issued[i]==0){

                            printf("Book is Already Available.\n");
                        }

                        else{

                            issued[i]=0;
                            printf("Book Returned Successfully.\n");
                        }

                        break;
                    }
                }

                if(found==0)
                    printf("Book Not Found.\n");

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