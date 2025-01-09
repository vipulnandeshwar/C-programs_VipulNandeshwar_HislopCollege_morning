// Online C compiler to run C program online
#include <stdio.h>
void main() {
    float r,p,ar;
    const float pi=3.14;
    printf("Enter Radius: ");
    scanf("%f",& r);
    ar=pi*(r*r);
    p=2*pi*r;
    printf("Area: %f \nPerimeter: %f", ar,p);
}