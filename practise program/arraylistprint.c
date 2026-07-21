

//#include<stdio.h>
//int main(){
//	int arr[5]={1,2,3,4,5};
//	int i;
//	for(i=0;i<5;i++){
//		printf("%d",arr[i]);
//	}
//}



//print reverse number
//#include<stdio.h>
//int main(){
//	
//	int arr[5]={1,2,3,4,5};
//	int i;
//	for(i=4;i>-1;i--){
//		printf("%d",arr[i]);
//	}
//}



//#include<stdio.h>
//int main(){
//	int arr[5]={1,2,3,4,5};
//	int i,m=0;
//	printf("Enter the index:");
//	scanf("%d",&m);
//	
//	for(i=0;i<5;i++)
//	{
//		if(i==m)
//		{
//			printf("%d",arr[i]);
//		}
//	}
//}


#include<stdio.h>
int main(){
	int arr[5]={6,7,8,9,10};
	int i,m;
	printf("Enter position of Element:");
	scanf("%d",&m);
	
	for(i=0;i<5;i++){
		if(arr[i]==m){
			printf("%d",i);
			
		}
	}
}




















