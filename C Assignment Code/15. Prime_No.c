//Q4. Check number is prime or not.

#include<stdio.h>
#include<conio.h>

int main(){

    int n;

    printf("Enter the number: \n");

    scanf("%d", &n);

    if(n%2==0){

        printf("%d its prime no. \n ", n);

    }else{

    printf("%d its not prime no. \n", n);

    }

    return 0;

}
