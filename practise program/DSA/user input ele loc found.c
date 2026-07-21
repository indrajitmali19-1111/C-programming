#include<stdio.h>
int main(){
	int arr[5]={1,2,3,11,10};
	int  i=0, ele,flag=0;
	printf("Enter Element:");
	scanf("%d",&ele);
	
	while(i<5){
		if(arr[i]==ele){
			printf("\nElemeny is Found loc:%d",i);
			flag=1;
		}
		i++;
	}
	
	if(flag==0){
		printf("\nEnter A valid Element");
		printf("\nElement is Not Found");
	}
	else{
		printf("\nElement Is Found\n this is list:");
		for(i=0;i<5;i++)
		printf(" %d",arr[i]);
	}
}
