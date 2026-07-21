#include<stdio.h>
void bubblesort(int arr[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


void printarray(int arr[],int size){
	
	int i;
	
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
		
	}
	printf("\n");
	
}


int main(){
	int arr[]={2,6,11,7,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Original Array:\n");
	printarray(arr,size);
	
	printf("\n");
	bubblesort(arr,size);
	
	printf("\nSorted Array:\n");
	printarray(arr,size);
	return 0;
}
