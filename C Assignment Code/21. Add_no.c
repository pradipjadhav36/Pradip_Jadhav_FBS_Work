//Q10. Add the (first and last) digit of a given number?

#include<stdio.h>
#include<conio.h>

void main(){

    int ln;
    int num;
    printf("Enter the No :");
    scanf("%d", &num);
    int fn = num%10;

    ln = num;

    while(ln>10){
        ln = ln/10;


    }
    //int sum = fn+ln;
    //printf("%d", sum);
    int no1= fn;
    int no2= ln;
    printf("%d %d",no2,no1 );

}

