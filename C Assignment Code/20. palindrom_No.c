#include<stdio.h>
#include<conio.h>

void main(){
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
