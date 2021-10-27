#include <stdio.h>

int main(){
    int selection, price, payment, change;
    printf("Please make your selection\n");
    printf("[1]Pepsi(P100)\n[2]Dr.Pepper(P120)\n[3]Coca-cola(P95)\n");
    printf("choices: "); 
    scanf("%d",&selection); 
    switch(selection){
           
        case 1:  
        price = 100; 
        printf("Please make a payment: "); 
        scanf("%d", &payment);
        if(payment>=price){  
            printf("You have purchased  Pepsi.\n");
            change = payment - price;
            printf("Change: %d", change); 
        } 
        else { 
            printf("You do not have sufficient cash!");
        }
        break;  
        
        case 2:  
        price = 120; 
        printf("Please input payment: "); 
        scanf("%d", &payment);
        if(payment>=price){  
            printf("You have purchase Dr.Pepper.\n"); 
            change = payment - price;
            printf("Change: %d", change);
        }
        else {
            printf("You do not have sufficient cash!");
        } 
        break; 
         
        case 3: 
        price = 95;
        printf("Please input payment: ");
        scanf("%d", &payment);
        if(payment>=price){ 
            printf("You have purchased  Coca-cola.\n");
            change = payment - price; 
            printf("change: %d", change); 
        }
        else{
            printf("You do not have sufficient cash!");
        } 
        break; 
         
        default: 
        printf("Invalid input");
         
    }
    return 0;  
}