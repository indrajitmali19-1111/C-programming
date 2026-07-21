#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int low=0,up=4,flag=0,mid;
	int ele;
	
	
	printf("Enter The Number:");
	scanf("%d",&ele);
	
	while(low<up){
		
		mid=(low+up)/2;
		
		if(arr[mid]==ele){
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
		printf("\n Ele position is:%d",mid);
		
	}
	else{
		printf("Element Not Found");
	}
}
