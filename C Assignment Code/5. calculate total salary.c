#include<stdio.h>

int main() {
    float basic, da, ta, hra, total_salary;


    printf("Enter the basic salaryof employee: ");
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
