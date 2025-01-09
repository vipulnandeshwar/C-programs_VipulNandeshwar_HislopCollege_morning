#include <stdio.h>
void main() {
    int d,w,y,rd;
    printf("Enter Days: ");
    scanf("%d",& d);
    y=d/365;
    rd=d%365;
    w=rd/7;
    rd=rd%7;
    printf("Year: %d \nweeks: %d\nDays: %d", y,w,rd);
}