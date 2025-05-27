#include<stdio.h>
#include<conio.h>




void pro(int, int);
int main(){

    int no1, no2;

    printf("Enter a number: ");
    scanf("%d", &no1);

    printf("Multiplication table of %d:\n ", no1);
    printf("\n");

    return 0;

}

void pro(int n, int i){

    for ( i = 1; i <= 10; i++)

        printf("%d x %d = %d\n", n, i, n * i);

}




