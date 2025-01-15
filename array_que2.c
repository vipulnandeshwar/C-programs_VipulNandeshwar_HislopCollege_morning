#include <stdio.h>
void main ()
{
	int i,a[5]={1,0,8,5};
	int newArray[5],k=0;
	printf("enter array elements: ");
	for(i=0;i<5;i++){
	
if(a[i]==0){
	newArray[k]=a[i];
	k++;
}
	}
	for (i=0;i<5;i++){
	
if (a[i]!=0){
	newArray[k]=a[i];
	k++;
}
}
for (k=0;k<5;k++){
	printf ("%d",newArray[k]);
}
}

