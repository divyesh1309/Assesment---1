#include <stdio.h>
void main() 
{
    int choice, quantity, total_amount=0;
    char more_orders;

    printf("    <<----->>menu<<----->>");


    //we used (do while) beacuse ek baar menu dikhake input le , or extra order cahiye to loop dubara  chalega 
    do 
    {
        printf("\n1. Pizza    price = 180rs/pcs");
        printf("\n2. Burger   price = 100rs/pcs");
        printf("\n3. Dosa     price = 120rs/pcs");
        printf("\n4. Idli     price = 50rs/pcs");
        printf("\nPlease Enter your choice : "); //kon kon si choice chahiye 
        scanf("%d", &choice);

        printf("Enter the quantity : ");   //kitni quntity me chahiye
        scanf("%d", &quantity);

        //use switch case for user ki konsi choice he or kitni quantity me he uska total amount add karga 
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
            default: printf("\nYour choice are invelid!");  //user galt choice choose kare is liye
             continue;   //dubara input de sake 


        }

        printf("\nTotal Amount is = %d", total_amount);  
        printf("\nDo you want to place more orders? (y/n) : ");    //more order ke liye ('y','n') 
        scanf(" %c", &more_orders);
    } 

    while (more_orders == 'y' || more_orders == 'Y');      // 'y', 'Y' user input karega to loop dubara chalega    

    printf("\nThank you! Your final bill is :- %d", total_amount);  //'n' , 'N' user input karega to loop close hoga or fainal bill print kar dega   
    
}
