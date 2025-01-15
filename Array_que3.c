#include <stdio.h>
void main ()
{
	int i,a[5]={5,6,8,3,1};
	int newArray[5],k=0;
	printf("enter array elements: ");
	for(i=0;i<5;i++){
	
if(a[i]%2==0){
	newArray[k]=a[i];
	k++;
}
	}
	for (i=0;i<5;i++){
	
if (a[i]%2!=0){
	newArray[k]=a[i];
	k++;
}
}
for (k=0;k<5;k++){
	printf ("%d",newArray[k]);
}
}

