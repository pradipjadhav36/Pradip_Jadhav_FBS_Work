//Q6.Check no is perfect or not.

#include<stdio.h>
#include<conio.h>

void main(){
    int n,rem,sum=0, i;

    printf("Enter the number :");

    scanf("%d", &n);

    for(i=1; i<=(n-1); i++){

        rem= n%i;

        if(rem ==0){
            sum= sum + i;
        }

    }

   if(sum == n)
    printf("%d is perfect number :" , n);
   else
    printf("%d is not perfect number :", n);

}
