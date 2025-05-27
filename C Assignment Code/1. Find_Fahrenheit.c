#include<stdio.h>
int main(){
    float F, C;
    printf("Enter the temperature in degree celsius:");
    scanf("%f", &C);

    F = (C * 9/5) + 32;

    printf("The temperature in farhenit = %f", F);
    return 0;
}
