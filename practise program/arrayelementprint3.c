#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5};
	int i,ele=0;
	printf("Enter Element :");
	scanf("%d",&ele);
	arr[5]=arr[4];
	arr[4]=arr[3];
	arr[3]=ele;
	
	for(i=0;i<6;i++){
		printf("%d",arr[i]);
	}
	
	
}
