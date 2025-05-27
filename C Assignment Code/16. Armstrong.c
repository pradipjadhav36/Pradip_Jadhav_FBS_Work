//Q5.Check number is armstrong or not.

#include<stdio.h>
#include<conio.h>

void main()
{
 int num, d, s=0,digitcount= 0, m =1, tempcount;
   printf("Enter the no :");
   scanf("%d",&num);

   int temp = num ;

   while(temp !=0){
    digitcount++;
    temp= temp/10;
   }

   temp = num;
   while(temp!=0){
    m=1;
    d= temp%10;
    tempcount = digitcount;

    m = pow(d,tempcount);
    s= s+m;
    temp = temp/10;

   }
   if(s==num){

    printf("its Armstrong no");

   }
   else
    {
   printf("its not Armstrong no");

}

getch();

}





