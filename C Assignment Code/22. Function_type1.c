#include<conio.h>
#include<stdio.h>

void main(){

    printf("Start\n");

    temp();
    perimeter();
    reversed();
    even();
    salary();
    age();





}
// Assignment

//Q 1 Finding F from C (temp).

int temp() {
    float F, C;
    printf("1) Enter the temperature in degree celsius:");
    scanf("%f", &C);

    F = (C * 9/5) + 32;

    printf("The temperature in farhenit = %f", F);
}

//Q 2 Finding area and perimeter of rectangle or circle.

void perimeter() {
    float length, width, area, perimeter;
    printf("\n2) Enter length  of rectangle:");
    scanf("%f", &length);

    printf("Enter width of rectangle:");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of rectangle = %f\n", area);
    printf("Perimeter of rectangle = %f", perimeter);


}


//Q 3 Accept a 3 digit number from user and
//find the sum of the digits and also reverse the number

int reversed() {
    int num, r1,r2,r3,x ,sum;
    printf("\n3) Enter a 3 digit number: ");
    scanf("%d", &num);

    r1 = num % 10;
    x = num / 10;
    r2 = x % 10;
    r3 = x / 10;

    sum = r1 + r2 + r3;

    printf("sum = %d\n", sum);
    printf("reversed num = %d%d%d", r1,r2,r3);


}

//Q 4 Check if the given number is even or odd.


int even() {

    int num;
    printf("\n4) Enter the number: ");
    scanf("%d", &num);

    if(num%2==0) {
        printf(" the number is even");
    }
    else {
        printf(" the number is odd");
    }
    return 0;
}

//Q 5 Calculating total salary based on basic.
//If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively
//otherwise da, ta and hra will be 15%,25% and 30% respectively.


int salary() {
    float basic, da, ta, hra, total_salary;


    printf("\n5) Enter the basic salaryof employee: ");
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

    return 0;
}

//Q 6 Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).

void age() {
    int age;
    char gender;
    printf("\n6) Enter the age:");
    scanf("%d", &age);
    printf("enter the gender either M or F:");
    scanf(" %c", &gender);

    if(gender == "M" || 'm' && age >=21) {
        printf("Eligible for marriage");
    }
    else if(gender == "F" || 'f' && age >=18) {
        printf("Eligible for marriage");
    }
    else {
        printf("not eligible for marriage");
    }
}




