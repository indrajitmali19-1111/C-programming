#include<stdio.h>
int insertionsort(int arr[], int size){
    int i,j,minindex,temp;

    for(i=0;i<size-1;i++){
        minindex=i;

        for(j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
}


int printarray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int main(){
    int arr[]={8,7,6,5,2};
    int size=sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array:\n");
    printarray(arr,size);

    
    printf("\nSorted array:\n");
    insertionsort(arr,size);
    printarray(arr,size);
    
}