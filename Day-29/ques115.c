#include <stdio.h>
#include <string.h>

int main() {

    int choice;
    int count = 0;

    int productId[100];
    char productName[100][50];
    int quantity[100];

    do {

        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                // Add Product
                printf("Enter Product ID: ");
                scanf("%d", &productId[count]);

                printf("Enter Product Name: ");
                scanf(" %[^\n]", productName[count]);

                printf("Enter Quantity: ");
                scanf("%d", &quantity[count]);

                count++;

                printf("\nProduct Added Successfully!\n");
                break;

            case 2:

                // Display Products
                if(count == 0) {

                    printf("\nNo Products Available.\n");
                }
                else {

                    printf("\n------ PRODUCT LIST ------\n");

                    for(int i = 0; i < count; i++) {

                        printf("\nProduct %d\n", i + 1);
                        printf("ID       : %d\n", productId[i]);
                        printf("Name     : %s\n", productName[i]);
                        printf("Quantity : %d\n", quantity[i]);
                    }
                }

                break;

            case 3: {

                // Search Product
                int id;
                int found = 0;

                printf("Enter Product ID: ");
                scanf("%d", &id);

                for(int i = 0; i < count; i++) {

                    if(productId[i] == id) {

                        printf("\nProduct Found\n");
                        printf("ID       : %d\n", productId[i]);
                        printf("Name     : %s\n", productName[i]);
                        printf("Quantity : %d\n", quantity[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product Not Found.\n");

                break;
            }

            case 4: {

                // Update Quantity
                int id;
                int found = 0;

                printf("Enter Product ID: ");
                scanf("%d", &id);

                for(int i = 0; i < count; i++) {

                    if(productId[i] == id) {

                        printf("Enter New Quantity: ");
                        scanf("%d", &quantity[i]);

                        printf("Quantity Updated Successfully.\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product Not Found.\n");

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