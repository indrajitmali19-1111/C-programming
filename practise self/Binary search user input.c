#include<stdio.h>
int main(){
	
	int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	
	int low=0,up=20,mid,ele,flag=0;
	printf("Enter Searching Element:");
	scanf("%d",&ele);
	
	while(low<up){
		mid=(low+up)/2;
		
		if(arr[mid]==ele);
		{
			flag=1;
			break;
		}
		if(arr[mid]<ele){
			low=mid+1;
		}
		else{
			up=mid-1;
		}
	}
	
	if(flag==1){
		printf("\nElement Is Found");
		printf("\nElement Index Position Is:%d",mid);
	}
	else{
		printf("\n Element Not Found");
	}
}
