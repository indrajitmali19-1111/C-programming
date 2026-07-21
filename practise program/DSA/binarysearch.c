#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int low=0,up=4,flag=0,mid;
	int ele=2;
	
	while(low<=up) //0<=4
	{
		
		mid=(low+up)/2;
		
		if(arr[mid]==ele){
			flag=1;
			break;
		}
		if(arr[mid]<ele)//3<5
		{
			low=mid+1;
			
		}
		else{
			up=mid-1;
		}
		
		
	}
	if(flag==1){
		printf("\n Element is Found");
		printf("\nElement Position is: %d",mid);
	}
	else{
		printf("\n Elment is not Found");
	}
}
