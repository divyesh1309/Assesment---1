#include <stdio.h>
void main() 
{
    int choice, quantity, total_amount=0;
    char more_orders;

    printf("    <<----->>menu<<----->>");

    do 
    {
        printf("\n1. Pizza    price = 180rs/pcs");
        printf("\n2. Burger   price = 100rs/pcs");
        printf("\n3. Dosa     price = 120rs/pcs");
        printf("\n4. Idli     price = 50rs/pcs");
        printf("\nPlease Enter your choice : ");
        scanf("%d", &choice);

        printf("Enter the quantity : ");
        scanf("%d", &quantity);


        switch (choice) 
        {
            case 1: total_amount += 180 * quantity;
             break;
            case 2: total_amount += 100 * quantity;
             break;
            case 3: total_amount += 120 * quantity;
             break;
            case 4: total_amount += 50 * quantity;
             break;
            default: printf("\nYour choice are invelid!"); continue;
        }

        printf("\nTotal Amount is = %d", total_amount);
        printf("\nDo you want to place more orders? (y/n) : ");
        scanf(" %c", &more_orders);
    } 

    while (more_orders == 'y' || more_orders == 'y');

    printf("\nThank you! Your final bill is :- %d", total_amount);
    
}
