#include <stdio.h>

void main(){

    int arr[7];
    int arr1[0];
    int no=2;

    printf("Enter the Arrat of Size =");
    scanf("%d",&arr[7]);

    printf ("\nArray fo size is 7 :");

    for(int i=0; i<7; i++){
        printf("\nArray [0] =");
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<=7; i+=no){
        printf("\nalter no =%d ",arr[i]);

    }

}

