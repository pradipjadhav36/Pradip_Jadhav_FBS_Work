#include<stdio.h>
#include<conio.h>

void main(){
    printf("\nStart");
    Armstrong();
    prime();
    strong();
    printf("\nEnd");
}

//Assignment 4

//Q 1Print armstrong number in the the given range 1 to n?
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
}else{
   printf("its not Armstrong no");
}
}

//Q 2Print prime number in the given range 1 to n?
void prime(){
    int num, i, temp=0;
    printf("\nEnter the No :");
    scanf("%d",&num);

    for(i=2; i<=num/2; i++){
        if(num%i==0){
            temp = 1;
            break;
        }
    }
    if(temp==0 && num!=1){
        printf("%d is a prime no", num);

    }else{
        printf("%d is not a prime no",num);
  }
}

//Q 3 check perfect number in the given range 1 to n?


// Q 4check strong number in the given range 1 to n?
void strong(){
    int start, end, rem;
    int i, temp,sum=0, fact, j;
    printf("\nEnter the start no : ");
    scanf("%d", &start);
    printf("Enter the end no : ");
    scanf("%d", &end);

    for(i=start; i<=end; i++){
        temp = i;
        sum = 0;
    while(temp!=0){
        rem = temp%10;
        fact=1;
    for(j=rem; j>=1; j--){
        fact = fact*j;
    }
        sum = sum+fact;
        temp = temp/10;
    }
        if(i==sum){
        printf("%d\n", i);
   }
 }
}




