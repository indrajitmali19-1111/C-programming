#include<stdio.h>
int main(){
	
	int low=0,up=20,ele=11;
	int mid,flag=0,insize=0,i;
	printf("Enter Array size:");
	scanf("%d",insize);
	int arr[insize];
	printf("\nEnter array Element:");
	for(i=0;i<insize;i++){
		scanf("%d",&arr[insize]);
	}
	
	
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
		printf("\n\n\nElement is Found ");
		printf("\n Ele location Is:%d",mid);
	}
	
	else{
		printf("Element Is Not Found !");
	}

}
