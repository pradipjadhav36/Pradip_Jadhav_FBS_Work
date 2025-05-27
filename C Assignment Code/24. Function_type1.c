#include<stdio.h>
#include<conio.h>



void main(){

    printf("Start\n ");
    number();
    table();
    nsum();
    prime();
    Armstrong();
    perfectn();
    factorial();
    strong();
    palindrom();
    Anumber();


    printf("\nEnd ");
}


//Assignment 3

//Q 1  Print numbes from 1 to 10.
 void number(){
     int i = 1;

     for(int i=1; i<=10; i++){
        printf("%d\n", i);
  }
}

//Q 2 Print table for the given number.
void table(){
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n ", n);
    printf("\n");

    for(int i=1; i<= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

//Q 3 Calculate sum of numbers in the given range.
void nsum(){
    int fvalue,lvalue,sum =0;
    printf("\nEnter the first and last value :");
    scanf("%d %d", &fvalue,&lvalue);

    for(int i=fvalue; i<=lvalue; i++)
        sum=sum+i;
        printf("%d", sum);
}

//Q 4 Check number is prime or not.
void prime(){
    int n;
    printf("\nEnter the number: \n");
    scanf("%d", &n);

    if(n%2==0){
        printf("%d its prime no. \n ", n);
    }else{
      printf("%d its not prime no. \n", n);
    }
}

//Q 5  Check number is armstrong or not?
void Armstrong(){
   int num, d, s=0,digitcount= 0, m =1, tempcount;
   printf("\nEnter the no :");
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
   }else
    {
       printf("its not Armstrong no");
}
//getch();
}

// Q 6 Check number is perfect or not.
void perfectn(){
    int n,rem,sum=0, i;
    printf("\nEnter the number :");
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

// Q 7 Find factorial of number.
void factorial(){
    int num, sum=1;
    printf("\nEnter the Number :");
    scanf("%d", &num);

    while(num>=1){
        sum=sum*num;
        num--;
    }
    printf("Factorial %d", sum);
}

//Q 8 Check number is strong or not.
void strong(){

    int start, end, rem;
    int i, temp,sum=0, fact, j;
    printf("\nEnter the start no : ");
    scanf("%d", &start);
    printf("\nEnter the end no : ");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
    temp = i;
    sum = 0;
    while(temp!=0)
    {
        rem = temp%10;
        fact=1;
    for(j=rem; j>=1; j--)
        {
            fact = fact*j;
        }

        sum = sum+fact;
        temp = temp/10;
    }

    if(i==sum)
        {
        printf("%d", i);

}
}
}

//Q 9 Check the given number is palindrome or not?

void palindrom(){
    int no,x, rev=0;
    printf("Enter the No =");
    scanf("%d", &no);
    x=no;
    while(no>0){
    rev = ( rev*10) + no%10;
    no = no/10;
   }
    if (rev == x)
     printf("%d is palindrom", x);
    else
     printf("%d is not palidrom", x);
   }


//Q 10. Add the (first and last) digit of a given number?
void Anumber(){

    int ln;
    int num;
    printf("\nEnter the No :");
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
