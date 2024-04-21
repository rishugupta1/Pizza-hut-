#include <stdio.h>

// Function to display the menu and return the base price based on the user's choice
float displayMenu(char type) {
    switch (type) {
        case 'v':
            printf("\nVeg Pizza Menu:\n");
            printf("\n   Pizza name                               price\n");
            printf("\n1. Small veggie pizza                        99.00\n");
            printf("2. Medium veggie pizza                      149.00\n");
            printf("3. Large veggie pizza                       199.00\n");

            printf("\n4. Small cheese pizza                       129.00\n");
            printf("5. Medium cheese pizza                      179.00\n");
            printf("6. Large cheese pizza                       229.00\n");

            printf("\n7. Small Paneer Tikka                       299.00\n");
            printf("8. Medium Paneer Tikka                      349.00\n");
            printf("9. Large Paneer Tikka                       399.00\n");

            printf("\n10. Small cheese paneer pizza               399.00\n");
            printf("11. Medium cheese paneer pizza              449.00\n");
            printf("12. Large cheese paneer pizza               499.00\n");

            return 0; // Base price for veg pizzas
        case 'n':
            printf("\nNon-Veg Pizza Menu:\n");
            printf("\n   Pizza name                                  price\n");
            printf("1. Small Pepperoni                          149.00\n");
            printf("2. Medium Pepperoni                         199.00\n");
            printf("3. Large Pepperoni                          249.00\n");

            printf("\n4. Small  Chicken Supreme                   199.00\n");
            printf("5. Medium  Chicken Supreme                  249.00\n");
            printf("6. Large Chicken Supreme                    299.00\n");

            printf("\n7. Small  Meat Feast                        249.00\n");
            printf("8. Medium  Meat Feast                       299.00\n");
            printf("9. Large Meat Feast                         349.00\n");

            printf("\n10. Small BBQ Chicken                        299.00\n");
            printf("11. Medium  BBQ Chicken                      349.00\n");
            printf("12. Large BBQ Chicken                        399.00\n");

            return 0; // Base price for non-veg pizzas (Pepperoni)
        default:
            printf("Invalid choice!\n");
            return -1;
    }
}

int main() {
    char choice;
    int pizza_choice, quantity, size_t, tip; // Added size_t for size, though not used in the code
    float base_price, total_price;

    int veg = 0, non_veg = 0; // Initialize these variables to 0

    // Displaying welcome message and prompting user for choice
    printf("============================================================\n");
    printf("---------------------Welcome to Pizza Hut-------------------\n");
    printf("============================================================\n");
    while(1){
    printf("Enter your choice Veg (v) or Non-Veg (n) pizza : ");
    scanf(" %c", &choice);

    // Setting flags based on user's choice
    if (choice == 'v')
        veg = 1;
    else if (choice == 'n')
        non_veg = 1;

    // Displaying menu and getting base price
    base_price = displayMenu(choice);

    // Calculating total price based on user's choice
    if (base_price >= 0) {
        printf("\nEnter your choice (1-12): ");
        scanf("%d", &pizza_choice);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (non_veg) {
            switch (pizza_choice) {
                case 1: total_price = (149 * quantity); break;
                case 2: total_price = (149 * quantity); break;
                case 3: total_price = (149 * quantity); break;

                case 4: total_price =  (199 * quantity); break;
                case 5: total_price =  (249 * quantity); break;
                case 6: total_price =  (299 * quantity); break;

                case 7: total_price = (249 * quantity); break;
                case 8: total_price = (299 * quantity); break;
                case 9: total_price = (349 * quantity); break;

                case 10: total_price = (299 * quantity); break;
                case 11: total_price = (349 * quantity); break;
                case 12: total_price = (399 * quantity); break;
                default: printf("Invalid choice!\n"); return 1;
            }
        } else if (veg) {
            switch (pizza_choice) {
                case 1: total_price = base_price + (99 * quantity); break;
                case 2: total_price = base_price + (149 * quantity); break;
                case 3: total_price = base_price + (199 * quantity); break;

                case 4: total_price = base_price + (129 * quantity); break;
                case 5: total_price = base_price + (179 * quantity); break;
                case 6: total_price = base_price + (229 * quantity); break;

                case 7: total_price = base_price + (299 * quantity); break;
                case 8: total_price = base_price + (349 * quantity); break;
                case 9: total_price = base_price + (399 * quantity); break;

                case 10: total_price = base_price + (399 * quantity); break;
                case 11: total_price = base_price + (449 * quantity); break;
                case 12: total_price = base_price + (499 * quantity); break;
                default: printf("Invalid choice!\n"); return 0;
            }
        }

        // Displaying total price and asking for tip
        printf("Total Pizza price Rs :                      %.2f\n", total_price);
        float gst=(total_price*18)/100;
        printf("GST                                         %.02f\n",gst);
        printf("Enter the tip amount :");
        scanf("%d",&tip);

        // Calculating and displaying total bill
        float total_bill=total_price+gst+tip;
        printf("Total bill                                  %.02f\n",total_bill);
    }
    }
    return 0;
}
