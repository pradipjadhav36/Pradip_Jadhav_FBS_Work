#include<stdio.h>
#include<conio.h>


int main(){

    printf("Start");

    //Q1
    float price, discount, total_price;
    total_price = Discount();
    printf("Total price = %f",total_price);


    //Q3
    int num1,num2, result;
    char operator;
    result = Operator();
    printf("result = %d", result);


    //Q4
    float basic, da, ta, hra, total_salary;
    total_salary = Salary();
    printf("Total Salary: %f", total_salary);


    printf("\nEnd");
    return 0;

}


// Assign 2

// Q 1 Find the price of item when discount is given (specify different discount based on price)

int Discount() {
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
    return total_price = price - (discount/100 * price);
}

//Q 2 not satisfy

//Q 3 Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.

int Operator() {
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
        printf("\nInvalid operator");
        return result;

    }
}

//Q 4 ( Basic salary),


int Salary(){
    float basic, da, ta, hra, total_salary;
    printf("\nEnter the basic salary of employee: ");
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

    return  total_salary = basic + da + ta + hra;
}

// Q 5 Satisfy


