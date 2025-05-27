// 4. Find odd and even among the numbers.

#include<stdio.h>


void main(){
    int arr[5];

    printf("Enter the size of arry :");
    scanf("%d", &arr[5]);
    printf("\nEnter the 5 element :");

    for(int i=0; i<5; i++){
       printf("\narr[0] =");
       scanf("%d",&arr[i]);
    }

    for(int i=0; i<5; i++){

        if(arr[i]%2==0)
        {
            printf("\nIs even no =%d",arr[i]);

    }else{
       printf("\nIs Odd no = %d",arr[i]);
    }
}
}



