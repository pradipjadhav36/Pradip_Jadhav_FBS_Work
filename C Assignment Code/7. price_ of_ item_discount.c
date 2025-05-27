// Find the price of item when discount is given (specify different discount based on price)

#include<stdio.h>

void main() {
    float price, discount, total_price;
    printf("enter the price of item:");
    scanf("%f", &price);

    if(price < 100) {
        discount = 0;
    }
    else if(price>= 100 && price<=300){
        discount = 10;
    }
    else if(price>300 && price<=500) {
        discount = 20;
    }
    else {
        discount = 30;
    }

    total_price = price - (discount/100 * price);
    printf("total price = %f",total_price);
}
