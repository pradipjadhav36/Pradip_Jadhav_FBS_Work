// Accept the price from user. Ask the user if he is a student (user may say yes or
// no). If he is a student and he has purchased more than 500 than discount is 20%
// otherwise discount is 10%. But if he is not a student then if he has purchased
// more than 600 discount is 15% otherwise there is not discount.

#include<stdio.h>
void main(){
    float price, total_price;
    char isStudent;
    printf("Enter the price:");
    scanf("%f", &price);
    printf("Are you a student?");
    printf("Type y for Yes or n for No.\n ");
    scanf(" %c", &isStudent);

    if(isStudent == 'y'){
        if(price > 500) {
            total_price = price - (20.0/100 * price);
            printf("Total price = %f", total_price);
        }
        else {
            total_price = price - (10.0/100 * price);
            printf("Total price = %f", total_price);
        }
    }
    else {
        if(price > 600) {
            total_price = price - (15.0/100 * price);
            printf("Total price = %f", total_price);
        }
        else{
            printf("No discount.\n");
            printf("Price = %f",price);
        }
    }


}
