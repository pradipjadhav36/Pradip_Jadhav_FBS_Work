#include <stdio.h>
  void main(){
     int q,no, fact =1, result=0, rem;
     printf("Enter the No :");
     scanf("%d", &no);
     q=no;
    while(q !=0){
       rem = q%10;
    for(int i=1; i<=rem; i++){
      fact = fact*i;
    }
      result = result + fact;
      fact = 1;
      q = q/10;
    }
     if(result == no)
        printf("%d is a strong number", no);
     else
    printf("%d is not a strong number", no);
    }
