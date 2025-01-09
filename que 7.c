// Online C compiler to run C program online
#include <stdio.h>
void main() {
    int w,h,p,ar;
    printf("Enter Width: ");
    scanf("%d",& w);
    printf("Enter Height: ");
    scanf("%d",& h);
    ar=w*h;
    p=2*(w+h);
    printf("Area: %d \nPerimeter: %d", ar,p);
}