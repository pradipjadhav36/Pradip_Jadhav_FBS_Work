//Q3.calculate sum of numbers in the given range.

#include<stdio.h>
#include<conio.h>


int main(){

    int fvalue,lvalue,sum =0;

    printf("Enter the first and last value :");

    scanf("%d %d", &fvalue,&lvalue);

    for(int i=fvalue; i<=lvalue; i++)

        sum=sum+i;

        printf("%d", sum);

        return 0;



}



