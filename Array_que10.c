// Que no. 10
#include <stdio.h>
void main(){
	int i,a[3]={4,7,5,9}, min=a[0];

	for(i=0; i<3; i++){
		if(a[i]<min)
		{
			min=a[i];
		}

}
	printf("Minimum value is %d", min);
}
