//3. Find sum of all numbers.

#include<stdio.h>

void main(){

    int arr[5];
    int sum;

    printf("Enter the size of array = ");
    scanf("%d", &arr[5]);


    printf("\nEnter the 5 Element : ");

    for(int i=0; i<5; i++){

      printf("\nArray[0] = ");
      scanf("%d", &arr[i]);

  }

    for(int i=0; i<5; i++){
        sum = sum + arr[i];
  }
     printf("Sum of the array elements: %d\n", sum);
}
