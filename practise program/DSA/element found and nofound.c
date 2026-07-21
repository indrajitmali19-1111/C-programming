#include<stdio.h>
int main(){
	int arr[5]={1,2,3,5,11};
	
	int i=0,ele=11;
	int flag=0;
	
	while(i<5){
		if(arr[i]==ele){
			printf("Element is found location is  : %d \nele is: %d",i,arr[i]);
			flag=1;
		}
		i++;
		
	}
	if(flag==0){
		printf("\n Element is Not Found");
	}
	else{
		printf("\n Element Is Found");
	}
	return 0;
}
