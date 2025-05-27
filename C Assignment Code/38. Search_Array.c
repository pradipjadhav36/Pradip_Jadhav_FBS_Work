
// Q2 Search the given number in array.
#include<stdio.h>
void main(){

    int arr[5] = {10,20,30,40,50};
    int no=0;

    for(int i=0; i<5; i++){
    printf("\n%d", arr[i]);

    }
     printf("\nEnter the no =");
     scanf("%d", &no);

      for(int i=0; i<5; i++){

       if( no == arr[i])
        {
         printf("\nIS Found = %d",no);
         return;
        }
     }
     printf("Element not found...");

}



