#include<stdio.h>
void main() {
    int mark;
printf("Enter 1, 2, 3, 4, 5, 6 or 7: ");
scanf("%d", & mark);
switch (mark){
    case 1:
    printf("Sunday");
    break;
    case 2:
    printf("Monday");
    break;
    case 3:
    printf("Tuesday");
    break;
    case 4:
    printf("Wednesday");
    break;
    case 5:
    printf("Thursday");
    break;
    case 6:
    printf("Friday");
    break;
    case 7:
    printf("Saturday");
    break;
    default:
    printf("Invalid break; Choice");
}
}