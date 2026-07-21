#include<stdio.h>
int main(){
	int arr[5]={1,2,3,5,11};
	
	int i=0,ele=11;
	
	while(i<5){
		if(arr[i]==ele){
			printf("Element is found lacation is  : %d",i);
			
		}
		i++;
		
	}
	if(i>5){
		printf("\n Element is Not Found");
	}
	return 0;
}
