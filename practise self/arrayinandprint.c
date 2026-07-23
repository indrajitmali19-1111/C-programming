#include<stdio.h>
int  main(){
	int size;
	printf("Enter size of Array:");
	scanf("%d",&size);
	 
	
	int arr[size];
	printf("\nEnter Array Element:\n");
	
	int  i;
	
	for(i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	
	
	printf("\n Array Elements:\n ");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
