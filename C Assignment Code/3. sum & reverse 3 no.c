#include<stdio.h>

int main() {
    int num, r1,r2,r3,x ,sum;
    printf("enter a 3 digit number: ");
    scanf("%d", &num);

    r1 = num % 10;
    x = num / 10;
    r2 = x % 10;
    r3 = x / 10;

    sum = r1 + r2 + r3;

    printf("sum = %d\n", sum);
    printf("reversed num = %d%d%d", r1,r2,r3);


}