#include<stdio.h>
#include<conio.h>

void Armstrong(int*);
void prime(int*);
void strong(int*, int*);

void main(){

      printf("Start");

      int no;
      printf("\nEnter the no :");
      scanf("%d",&no);
      Armstrong(&no);


      int no1;
      printf("\nEnter the No :");
      scanf("%d",&no1);
      prime(&no1);

      int no2,no3;
      printf("\nEnter the start no : ");
      scanf("%d", &no2);
      printf("\nEnter the end no : ");
      scanf("%d", &no3);
      strong(&no2,&no3);



      printf("\nEnd");




}


//Q 1 Print armstrong number in the the given range 1 to n?
void Armstrong(int* num)
{
 int d, s=0,digitcount= 0, m =1, tempcount;
 int temp = (*num) ;

   while(temp !=0){
    digitcount++;
    temp= temp/10;
   }

   temp = (*num);
   while(temp!=0){
    m=1;
    d= temp%10;
    tempcount = digitcount;

    m = pow(d,tempcount);
    s= s+m;
    temp = temp/10;

   }
   if(s==(*num)){

    printf("its Armstrong no");

   }
   else
    {
   printf("its not Armstrong no");

}
}


//Q 2
void prime(int* num){
int i, temp=0;
  for(i=2; i<=(*num)/2; i++){
    if((*num)%i==0){
       temp = 1;
        break;
   }
}
    if(temp==0 && (*num)!=1){
        printf("%d is a prime no", (*num));

    }else{
        printf("%d is not a prime no",(*num));

    }
}


//Q 3
// Q 4
void strong(int* start, int* end){
    int i, temp,sum=0, fact, j, rem;
    for(i=(*start); i<=(*end); i++)
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
        printf("%d is a strong no ", i);

    }
  }

}
