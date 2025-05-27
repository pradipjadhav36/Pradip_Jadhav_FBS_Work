#include<stdio.h>
#include<conio.h>


int main(){

        printf("Start");

        //Finding F from C (temp).
        float F;
        F = celsius();
        printf("The Temperature in farhenit = %f", F );

        //Finding area and perimeter of rectangle or circle.
        float area, perimeter;
        area = rectangle();
        printf("Area of Rectangle is = %f", area);
        perimeter = rectangle();
        printf("perimeter of Rectangle is = %f", perimeter);

        ///Accept a 3 digit number from user and find the sum of the digits and also reverse the number
        int num, r1,r2,r3,x ,sum;
        sum =  sum1();
        printf("sum = %d\n", sum);
        printf("reversed no = %d%d%d", r1,r2,r3);



        ///Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.
        float basic, da, ta, hra, total_salary;
        total_salary = salary();
        printf("Total Salary: %f", total_salary);

        printf("\nEnd");


        return 0;
}


// Assign 1
//Q 1 Finding F from C (temp).

 int celsius(){
     float F, C;
     printf("\nEnter the temperature in degree celsius:");
     scanf("%f", &C);

     return F = (C * 9/5) + 32;
}


//Q 2.Finding area and perimeter of rectangle or circle.

int rectangle(){

    float length, width, area, perimeter;
    printf("\nEnter length and width of rectangle:");
    scanf("%f %f", &length,&width);

    return area = length * width;
    return perimeter = 2 * (length + width);


}

// Q 3 Accept a 3 digit number from user and find the sum of the digits and also reverse the number.

int sum1(){
    int num, r1,r2,r3,x ,sum;
    printf("\nEnter a 3 digit number: ");
    scanf("%d", &num);

    r1 = num % 10;
    x = num / 10;
    r2 = x % 10;
    r3 = x / 10;

    return sum = r1 + r2 + r3;

}

//Q 4 not satisfy

// Q 5 Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.


int salary() {
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

    return total_salary = basic + da + ta + hra;
}

//Q 6 not satisfy
