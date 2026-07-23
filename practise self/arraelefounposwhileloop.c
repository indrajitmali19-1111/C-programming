#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	
	int i=0,ele=3,out=0;
	
	while(i<5){
		if(arr[i]==ele){
			printf("Position Of Element: %d",i);
			printf("\nElement is: %d",ele);
			out=1;
		}
		i++;
		
	}
	if(out==0){
		printf("\nElement Is Not Found");
		
	}
	else{
		printf("\n Element is found");
	}
}
