//#include<stdio.h>
//int main(){
//	int arr[5]={1,2,3,4,5};
//	int mi,i;
//	printf("Enter the Element:");
//	scanf("%d",&mi);
//	
//	for(i=0;i<5;i++){
//		if(arr[i]==mi){
//			printf("Index is:%d",i);
//		}
//	}
//}


#include<stdio.h>
int main(){
	int arr[6]={1,2,3,4,5};
	int mi,i;
	printf("Enter the Element:");
	scanf("%d",&mi);
	
	for(i=0;i<5;i++){
		
		printf("%d",arr[i]);
	}
	
//	arr[5]=arr[4];
//	arr[4]=arr[3];
//	arr[3]=arr[2];
//	arr[2]=arr[1];
//	arr[1]=arr[0];
//	arr[0]=mi;
	
	for(i=5;i>0;i--){
		if(arr[i]=arr[i-1]);
	}
	arr[0]=mi;
	
	printf("\n");
	for(i=0;i<6;i++){
		printf("%d",arr[i]);
	}
	

	
}
