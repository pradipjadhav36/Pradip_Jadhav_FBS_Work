#include<stdio.h>
#include<conio.h>

void Discount(float);
void menu(int,int,float);
void pro(float,float,char);



int main(){
    printf("Start");

    float no1;
    printf("\nEnter the price of item:");
    scanf("%f", &no1);
    Discount(no1);


    int ch1, no2;
    printf("\nEnter the choice = 1. for even odd and 2. for basic salary:");
    scanf("%d", &ch1);

    float base;
    printf("\nEnter the basic salary of employee: ");
    scanf("%f", &base);
    menu(ch1,no2,base);


    float vas,no4;
    char stu;
    printf("\nEnter the price:");
    scanf("%f", &vas);

    printf("Are you a student?");
    printf("Type y for Yes or n for No.\n ");
    scanf(" %c", &stu);
    pro(vas,no4,stu);


    printf("\nEnd");
    return 0;





}


//Assign 2

//Q 1 Find the price of item when discount is given (specify different discount based on price)

void Discount(float price) {
    float discount, total_price;

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

//Q 2Write a program to find greatest of three numbers using nested if-else.

//Q 3Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.


// Q 4 Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.

void menu( int ch,int num, float basic){
    int choice;
    float da, ta, hra, total_salary;

    if(ch == 1) {
        printf("\nEnter the number: ");
    scanf("%d", &num);

        if(num%2==0) {
            printf("the number is even");
        }
        else {
            printf("the number is odd");
        }
    }

    else if(ch == 2) {
        if (basic <= 5000) {
            da = (10.0 / 100) * basic;
            ta = (20.0 / 100) * basic;
            hra = (25.0 / 100) * basic;
        } else {
            da = (15.0 / 100) * basic;
            ta = (25.0 / 100) * basic;
            hra = (30.0 / 100) * basic;
        }


        total_salary = basic + da + ta + hra;


        printf("Total Salary: %f", total_salary);
    }
    else {
        printf("Invalid operator...");
    }

}

//Q 5 Accept the price from user. Ask the user if he is a student (user may say yes or no).
//If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.
// But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.

void pro(float price,float total_price, char isStudent  ){

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


















