#include<stdio.h>
void main() {
    int mark;
printf("Enter marks: ");
scanf("%d", & mark);
if (mark >=80){
printf("A Grade");
}
else if (mark >=50 & mark<= 80)
{
printf("b Grade");
}
else{
 printf("C Grade");   
}
}
