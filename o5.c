#include <stdio.h>

int main() {
    int choice, quantity;
    int bill = 0, totalItems = 0;
    int price;
    float discount, payable;

    do {
        printf("\n--- University Canteen Menu ---\n");
        printf("1. Tea       - Rs 60\n");
        printf("2. Samosa    - Rs 40\n");
        printf("3. Sandwich  - Rs 180\n");
        printf("4. Checkout\n");

        printf("Enter choice(1-3): ");
        printf("enter (4 )for exit or checkout:\n");
        scanf("%d", &choice);
            

            if (choice == 1){
			
                price = 60;
                printf("Quantity: ");
            scanf("%d", &quantity);
				}
            else if (choice == 2){
			
                price = 40;
            printf("Quantity: ");
            scanf("%d", &quantity);
			}
            else if(choice==3){
			
                price = 180;
                printf("Quantity: ");
            scanf("%d", &quantity);
                }
               else if(choice==4){
                	printf("invalid number ,Try again!\n");
                	break;
				}
            bill = bill + price * quantity;
            totalItems = totalItems + quantity;

            printf("Current bill: Rs %d\n", bill);
            
            
    }

     while (choice <= 4);

    if (bill > 1000)
        discount = bill * 0.10;

    else
        discount = 0;

    payable = bill - discount;

    printf("\nTotal items: %d\n", totalItems);
    printf("Bill: Rs %d\n", bill);
    printf("Discount: Rs %.0f\n", discount);
    printf("Payable: Rs %.0f\n", payable);

    return 0;
}