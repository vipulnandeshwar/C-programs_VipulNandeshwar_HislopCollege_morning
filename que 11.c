#include <stdio.h>
void main() {
    float o1,o2,a,avg,obj;
    printf("Enter weight of Object 1: ");
    scanf("%f",& o1);
    printf("Enter weight of Object 2: ");
    scanf("%f",& o2);
    printf("Enter Number of Object: ");
    scanf("%f",& a);
    obj=o1+o2;
    avg=obj/a;
    printf("Average %f", avg);
}