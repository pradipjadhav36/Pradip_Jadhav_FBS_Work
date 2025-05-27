// // Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.

#include<stdio.h>
void main(){
    int num,ch;
    float basic, da, ta, hra, total_salary;
    int choice;
    printf("Enter the choice = 1. for even odd and 2. for basic salary:");
    scanf("%d", &ch);

    if(ch == 1) {
        printf("enter the number: ");
    scanf("%d", &num);

        if(num%2==0) {
            printf(" the number is even");
        }
        else {
            printf(" the number is odd");
        }
    }

    else if(ch == 2) {
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
        }
    else {
        printf("Invalid operator...");
    }

}
