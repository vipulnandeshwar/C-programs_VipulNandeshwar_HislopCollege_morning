#include<stdio.h>
void main() {
    int num,d1,d2, d3, rev;
printf("Enter value: ");
scanf("%d", & num);
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
rev=d1*100+d2*10+d3*1;
printf("after swaping a is %d", rev);
}