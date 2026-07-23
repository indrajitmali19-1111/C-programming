#include<stdio.h>
int bubblesort(int arr[],int size){
  int i,j;
  for(i=0;i<size-1;i++){
    for(j=0;j-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  } 
}


int printarray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
    printf("%d ",arr[i]);
}
}


int main(){
    int arr[]={11,17,7,10,71};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted array:\n");
    printarray(arr,size);  //directly printt because inside funcction only printf and call to print.
	printf("\n\n");
	
	
	
    printf("\nSorted Array:\n");
    bubblesort(arr,size);
    printarray(arr,size);

}


