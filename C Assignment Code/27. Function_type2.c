#include<stdio.h>
#include<conio.h>

int main(){
     printf("Start");

     //Q3
     int fvalue,lvalue,sum =0;
     sum = Sum();
     printf("%d", sum);

     //Q7
     sum = fact();
     printf("Factorial %d", sum);
     printf("\nEnd");
     return 0;


}


//Assign 3

//Q 3.calculate sum of numbers in the given range.
int Sum(){
    int fvalue,lvalue,sum =0;
    printf("\nEnter the first and last value :");
    scanf("%d%d", &fvalue,&lvalue);

    for(int i=fvalue; i<=lvalue; i++)

        return sum=sum+i;
}

//Q 7 Find factorial of number.
int fact(){
    int num, sum=1;
    printf("\nEnter the Number :");
    scanf("%d", &num);

    while(num>=1){
       return sum=sum*num;
        num--;
    }
}



