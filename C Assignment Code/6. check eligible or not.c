#include<stdio.h>
void main() {
    int age;
    char gender;
    printf("Enter the age:");
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
