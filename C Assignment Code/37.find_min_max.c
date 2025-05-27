#include<stdio.h>
void main(){
   int arr[5];
   int no;
   int min;
   int max;


   printf("Enter the Size of Array =");
   scanf("%d", &no);

   printf("\nArray of size is 5 :");

   for(int i=0; i<5; i++){
      printf("\nArray[0] = ");
      scanf("%d", &arr[i]);

  }

     min = arr[0];
     max = arr[0];

     for(int i=1; i<5; i++){
         if(min > arr[i]){
             min=arr[i];
         }
         if(max < arr[i]){
             max = arr[i];
         }
     }

     printf("\nMaximum =%d", max);
     printf("\nminimum =%d", min);

}

