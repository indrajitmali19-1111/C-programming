#include<stdio.h>
int main(){
	int arr[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,11};
	int low=0,up=20,ele=11,mid,flag=0;
	
	
	
	while(low<=up){
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
		printf("Element is Found !");
		printf("\n Ele location Is:%d",mid);
	}
	
	else{
		printf("Element Is Not Found !");
	}

}
