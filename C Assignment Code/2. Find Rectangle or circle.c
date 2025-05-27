#include<stdio.h>
void main() {
    float length, width, area, perimeter;
    printf(" Enter length and width of rectangle:");
    scanf("%f%f", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of rectangle = %f\n", area);
    printf("Perimeter of rectangle = %f", perimeter);


}
