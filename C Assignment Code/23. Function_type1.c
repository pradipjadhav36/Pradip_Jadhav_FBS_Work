#include<stdio.h>
#include<conio.h>


void main(){

    printf("Star");
    price();
    //greatest();
    Operator();
    Salary();
    Price();

    printf("End");




}
//Assign 2

//Q 1 Find the price of item when discount is given 
// (specify different discount based on price)


void price() {
    float price, discount, total_price;
    printf("\nEnter the price of item:");
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

//Q 2 Write a program to find greatest of three numbers using nested if-else.

void greatest(){
    int a=10, b=20, c=30;

    if(a > b) {
       if (a > c) {
          printf("a is greater.");
       }else{
            printf(" c is greater");
        }
    }else{
        if(b > c) {
            printf("b is greater");
        }else {
            printf("c is greater");
        }
    }
}


//Q 3 Accept two numbers from user and an operator
//  (+,-,/,*,%) based on that perform the desired operations.

int Operator(){
    int num1,num2, result;
    char operator;
    printf("\nEnter two numbers:");
    scanf("%d%d", &num1,&num2);
    printf("\nEnter the operation (+,-,/,*, %%):\n");
    scanf(" %c", &operator);

    if(operator == '+'){
        result = num1 + num2;
    }
    else if(operator == '-'){
        result = num1 - num2;
    }
    else if(operator == '*') {
        result = num1 * num2;
    }
    else if(operator == '/') {
        result = num1 / num2;
    }
    else if(operator == '%') {
        result = num1 % num2;
    }
    else {
        printf("invalid operator");
        return 1;
    }

    printf("result = %d", result);
}


//Q 4 Display a menu to the user (like 1.Even Odd 2. Basic salary etc),
//  ask the user to enter his choice, then based on that perform the desired operations.

void Salary(){
    int num,ch;
    float basic, da, ta, hra, total_salary;
    int choice;
    printf("\nEnter the choice = 1. for even odd and 2. for basic salary:");
    scanf("%d", &ch);

    if(ch == 1){
        printf("Enter the number: ");
        scanf("%d", &num);

    if(num%2==0){
        printf(" the number is even");
    }else{
        printf(" the number is odd");
    }
 }
  else if(ch == 2){
        printf("Enter the basic salary of employee: ");
        scanf("%f", &basic);


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

        }else {
            printf("Invalid operator...");
        }

}

//Q 5 Accept the price from user. Ask the user if he is a student (user may say yes or no).
//  If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.
//  But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.

void Price(){
    float price, total_price;
    char isStudent;
    printf("\nEnter the price:");
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
}else {
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





