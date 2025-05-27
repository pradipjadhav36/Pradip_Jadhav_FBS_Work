
#include<stdio.h>
#include<conio.h>

void main(){

int num, sum=1;

    printf("Enter the Number :");

    scanf("%d", &num);

    while(num>=1){
        sum=sum*num;
        num--;

    }
    printf("Factorial %d", sum);

}

