#include<stdio.h>


void main(){
   int no;

  // Input the size of the arrays

   printf("Enter the Size of Array : ");
   scanf("%d", &no);

   int arr1[no], arr2[no], merge[no];


  // Input element for the first array

  printf("\nEnter the element for first array:\n");
  for(int i=0; i<no; i++){
    printf("Array[%d]:", i);
    scanf("%d", &arr1[i]);
  }

   // Input element for the Second array

   printf("\nEnter the element for Second array:\n");
   for(int i=0; i<no; i++){
    printf("Array[%d]:", i);
    scanf("%d", &arr2[i]);
   }


   // Merge Two Array

   for(int i=0; i<no; i++){
    merge[i] = arr1[i];
    printf("\nMerge array =%d", merge[i]);
   }

   for(int i=0; i<no; i++){
    merge[i] = arr2[i];
    printf("\nMerge array =%d", merge[i]);
   }


}


