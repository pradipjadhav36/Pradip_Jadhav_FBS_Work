#include<stdio.h>



void pro(float);
int main(){

    printf("Start");

    float a;
    printf("\nEnter the temperature in degree celsius:");
    scanf("%f", &a);
    pro(a);

    return 0;
    printf("\nEnd");

}

void pro(float c)
{

    float f = (c * 9/5) + 32;
    printf("The temperature in farhenit = %f", f);

}






