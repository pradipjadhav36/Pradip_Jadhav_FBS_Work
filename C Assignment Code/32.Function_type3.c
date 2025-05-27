#include<stdio.h>
#include<conio.h>
void pro(float);
void rectangle(float,float);
void reverse(int);
void even(int);
void Salary(float);
void marriage(int,char);

int main(){
      printf("Start");

      float no;
      printf("\nEnter the temperature in degree celsius:");
      scanf("%f", &no);
      pro(no);


      float no1,no2;
      printf("\nEnter length and width of rectangle:");
      scanf("%f%f", &no1, &no2);
      rectangle(no1,no2);


      int no3;
      printf("\nEnter a 3 digit number: ");
      scanf("%d", &no3);
      reverse(no3);



      int no4;
      printf("\nEnter the number: ");
      scanf("%d", &no4);
      even(no4);


      float no5;
      printf("\nEnter the basic salary of employee: ");
      scanf("%f", &no5);
      Salary(no5);

      int no6, no7;
      printf("\nEnter the age:");
      scanf("%d", &no6);
      printf("\nEnter the gender either M or F:");
      scanf(" %c", &no7);
      marriage(no6,no7);


      printf("\nEnd");
      return 0;

}

//Assign 1

//Q 1.Finding F from C (temp).
void pro(float C){
    float F;
    F = (C * 9/5) + 32;
    printf("The temperature in farhenit = %f", F);
}


//Q 2.Finding area and perimeter of rectangle or circle.
void rectangle(float length, float width) {
    float area;
    float perimeter;

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of rectangle = %f\n", area);
    printf("Perimeter of rectangle = %f", perimeter);


}

//Q 3.Accept a 3 digit number from user and find the sum of the digits and also reverse the number
void reverse(int num) {
    int r1, r2, r3, x ,sum;
    r1 = num % 10;
    x = num / 10;
    r2 = x % 10;
    r3 = x / 10;

    sum = r1 + r2 + r3;

    printf("sum = %d\n", sum);
    printf("reversed num = %d%d%d", r1,r2,r3);
}

// Q 4.Check if the given number is even or odd.

void even(int num) {
    if(num%2==0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
}

// Q 5 Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.
void Salary( float basic) {
    float da, ta, hra, total_salary;
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

//Q 6 Write a program to check if person is eligible to marry or not (male age >=21 and female age>=18).
void marriage(int age, char gender) {
    if(gender == "M" || 'm' && age >=21) {
        printf("Eligible for marriage");
    }
    else if(gender == "F" || 'f' && age >=18) {
        printf("Eligible for marriage");
    }
    else {
        printf("Not eligible for marriage");
    }
}
