/*
Simple Food Menu
Author: Hassib Tleiji
*/
#include <stdio.h>

int main() {
     
    int order;

    printf("Welcome to Seebs Fast Shack, what would you like to order today?\n");
    printf("(1)|Hamburgers|    (2)|Shakes|    (3)|Fries|     (4)|Nuggets|\n");
   
    scanf("%d", &order);
    
    switch(order){
    case 1: 
      printf("(1)|Cheeseburger|     (2)|Hamburger|\n");
          scanf("%d", &order);
          if(order == 1){
              printf("Your Chesseburger is $7.99!\n");
          }else if(order == 2){
            printf("Your Hamburger is $6.99!\n");    
            }else{
                printf("Invalid Entry\n");
            }
            break;
    
    case 2:
    printf("(1)|Chocolate|     (2)|Vanilla|\n");
        scanf("%d", &order);
        if(order == 1 || order == 2 ){
            printf("(1)|Small|  (2)|Medium|    (3)|Large|\n");
            scanf("%d", &order);
            switch(order){
                case 1: 
                printf("Your Milkshake is $3.99!\n");
                break;

                case 2:
                printf("Your Milkshake is $4.99!\n");
                break;

                case 3:
                printf("Your Milkshake is $5.49\n");
                break;

                default:
                printf("Wrong Size!\n");
                break;

            }
        }


    break;

    case 3:
    printf("(1)|Small|     (2)|Medium|  (3)|Large|\n");
        scanf("%d", &order);
        switch(order){

            case 1:
            printf("Your Frech Fries are $2.99\n");
            break;

            case 2:
            printf("Your French Fries are $3.99\n");
            break;

            case 3:
            printf("Your French Fries are $4.49\n");
            break;

            default:
            printf("Wrong Size!\n");
        }
    break;
    
    case 4:
    printf("(1)|10 Piece|    (2)|20 Piece|     (3)|30 Piece|\n");
        scanf("%d", &order);
        switch(order){

            case 1:
            printf("Your Nuggets are $4.49\n");
            break;

            case 2:
            printf("Your Nuggets are $6.49\n");
            break;

            case 3:
            printf("Your Nuggets are $8.89\n");
            break;

            default:
            printf("Wrong Size!\n");
        }
    break;

   default:
   printf("I'm sorry, but that is an ivalid uption. Please try again. \n");

    }
    printf("Thank your for eating at Seebs Fast Shack, hope to see you soon!\n");
        
        return 0;
}
    
        

